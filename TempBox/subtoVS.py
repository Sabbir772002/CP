import json
import re
import os

def sublime_to_vscode_snippet(file_content):
    content_match = re.search(r'<content><!\[CDATA\[(.*?)\]\]></content>', file_content, re.DOTALL)
    trigger_match = re.search(r'<tabTrigger>(.*?)</tabTrigger>', file_content)
    description_match = re.search(r'<description>(.*?)</description>', file_content)

    if content_match and trigger_match:
        content = content_match.group(1).strip()
        trigger = trigger_match.group(1).strip()
        description = description_match.group(1).strip() if description_match else trigger

        vscode_snippet = {
            trigger: {
                "prefix": trigger,
                "body": content.splitlines(),
                "description": description
            }
        }
        return vscode_snippet
    return None

def convert_snippets(folder_path):
    vscode_snippets = {}

    for file_name in os.listdir(folder_path):
        if file_name.endswith(".sublime-snippet"):
            file_path = os.path.join(folder_path, file_name)
            # Read the file with utf-8 encoding
            with open(file_path, 'r', encoding='utf-8', errors='replace') as file:
                sublime_content = file.read()
                vscode_snippet = sublime_to_vscode_snippet(sublime_content)
                if vscode_snippet:
                    vscode_snippets.update(vscode_snippet)

    # Save all snippets to a VS Code JSON file with utf-8 encoding
    with open('cpp_vscode_snippets.json', 'w', encoding='utf-8') as outfile:
        json.dump(vscode_snippets, outfile, indent=4)

# Replace with the path to your snippets folder
convert_snippets(r"E:\CodeBox\TempBox\Sublime Snippet")

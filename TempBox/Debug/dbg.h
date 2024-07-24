template <typename T>
istream &operator>>(istream &in, vector<T> &a){
  for (auto &x:a)in>>x;
    return in;
};
template <typename T>
ostream &operator<<(ostream &out, vector<T> &a){
  for (auto &x:a)out<<x<<" ";
    return out;
};
#define dbg(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
    cerr << name << " = " << arg1 << "\n";
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args) {
    const char *comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...);
}
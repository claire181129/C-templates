template<typename T>
T max(T a, T b)
{
	return b < a ? a : b;
}
template<typename T>
T fooA(T*)
{

}
template<typename T>
void fooB(T t)
{
	undeclared();
	undeclared(t);
	static_assert(sizeof(int) > 10, "int too small");
	static_assert(sizeof(T) > 10, "T too small");
}

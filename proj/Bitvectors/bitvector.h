#ifndef DATASTRUCTURE_BITVECTOR_H
#define DATASTRUCTURE_BITVECTOR_H

namespace DataStructure
{
	class Bitvector
	{
	protected:
		unsigned long* mArray;
		int mSize;

	public:
		Bitvector(int size);
		~Bitvector();

		void Resize(int size);

		void Set(int index, bool value);
		void ClearAll();
		void SetAll();

		bool WriteFile(const char* fileName);
		bool ReadFile(const char* fileName);

		bool operator[] (int index);
	};
}

#endif // !DATASTRUCTURE_BITVECTOR_H

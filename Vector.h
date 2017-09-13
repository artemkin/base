#pragma onca

template<typename T>
class Vector
{
public:
    explicit Vector()
    : data_(nullptr)
    , size_(0)
    {}

    explicit Vector(T* data, int size)
    : data_(data)
    , size_(size)
    {
        assert((data == nullptr && size == 0) || (data != nullptr && size > 0));
    }

    int Size() const
    {
        return size_;
    }

    T& operator[](int index)
    {
        assert(index >= 0 && index < size_);
        return data_[index];
    }

    Vector<T> SubVector(int fromIdx, int toIdx)
    {
        return Vector<T>(data_ + fromIdx, toIdx - fromIdx);
    }

private:
    T* data_;
    int size_;
};


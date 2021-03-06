#ifndef TRAITS_H
#define TRAITS_H

namespace LightSTL{

/***************iterator_traits，用来萃取迭代器的性质***************/

struct normal_iterator{};
struct forward_iterator : public normal_iterator{};
struct bidirection_iterator : public forward_iterator{};
struct random_access_iterator : public bidirection_iterator{};

template<class Iterator>
struct iterator_traits
{
	typedef typename Iterator::iterator_type iterator_type;
	typedef typename Iterator::value_type value_type;
};

template<class T>
struct iterator_traits<T*>
{
	typedef random_access_iterator iterator_type;
    typedef T value_type;
};

template<class InputIterator>
typename iterator_traits<InputIterator>::value_type* value_type(const InputIterator& ite)
{
    return static_cast<typename iterator_traits<InputIterator>::value_type*>(0);
}

/***************type_traits，用来萃取类的性质***************/

struct true_type{};
struct false_type{};

template<class T>
struct type_traits
{
	typedef false_type has_trivial_destructor_type;
	typedef false_type has_trivial_assignment_type;
   	typedef false_type is_POD_type;
};



template<class T>
struct type_traits<T*>
{
	typedef true_type has_trivial_destructor_type;
	typedef true_type has_trivial_assignment_type;
	typedef true_type is_POD_type;
};

template<>
struct type_traits<int>
{
	typedef true_type has_trivial_destructor_type;
	typedef true_type has_trivial_assignment_type;
	typedef true_type is_POD_type;
};


template<>
struct type_traits<unsigned int>
{
	typedef true_type has_trivial_destructor_type;
	typedef true_type has_trivial_assignment_type;
	typedef true_type is_POD_type;
};


template<>
struct type_traits<short>
{
	typedef true_type has_trivial_destructor_type;
	typedef true_type has_trivial_assignment_type;
	typedef true_type is_POD_type;
};


template<>
struct type_traits<unsigned short>
{

	typedef true_type has_trivial_destructor_type;
	typedef true_type has_trivial_assignment_type;
	typedef true_type is_POD_type;
};


template<>
struct type_traits<long>
{
	typedef true_type has_trivial_destructor_type;
	typedef true_type has_trivial_assignment_type;
	typedef true_type is_POD_type;
};


template<>
struct type_traits<unsigned long>
{
	typedef true_type has_trivial_destructor_type;
	typedef true_type has_trivial_assignment_type;
	typedef true_type is_POD_type;
};

template<>
struct type_traits<long long>
{
	typedef true_type has_trivial_destructor_type;
	typedef true_type has_trivial_assignment_type;
	typedef true_type is_POD_type;
};

template<>
struct type_traits<unsigned long long>
{
	typedef true_type has_trivial_destructor_type;
	typedef true_type has_trivial_assignment_type;
	typedef true_type is_POD_type;
};

template<>
struct type_traits<char>
{
	typedef true_type has_trivial_destructor_type;
	typedef true_type has_trivial_assignment_type;
	typedef true_type is_POD_type;
};


template<>
struct type_traits<unsigned char>
{
	typedef true_type has_trivial_destructor_type;
	typedef true_type has_trivial_assignbment_type;
	typedef true_type is_POD_type;
};


template<>
struct type_traits<float>
{
	typedef true_type has_trivial_destructor_type;
	typedef true_type has_trivial_assignment_type;
	typedef true_type is_POD_type;
};


template<>
struct type_traits<double>
{
	typedef true_type has_trivial_destructor_type;
	typedef true_type has_trivial_assignment_type;
	typedef true_type is_POD_type;
};


template<>
struct type_traits<long double>
{
	typedef true_type has_trivial_destructor_type;
	typedef true_type has_trivial_assignment_type;
	typedef true_type is_POD_type;
};

/***************integer_traits，用来萃取类的性质***************/
template<class T>
struct integer_traits
{
    typedef false_type is_integer_type;
};

template<>
struct integer_traits<int>
{
    typedef true_type is_integer_type;
};

template<>
struct integer_traits<unsigned int>
{
    typedef true_type is_integer_type;
};

template<>
struct integer_traits<short>
{
    typedef true_type is_integer_type;
};

template<>
struct integer_traits<unsigned short>
{
    typedef true_type is_integer_type;
};

template<>
struct integer_traits<long>
{
    typedef true_type is_integer_type;
};

template<>
struct integer_traits<unsigned long>
{
    typedef true_type is_integer_type;
};

template<>
struct integer_traits<long long>
{
    typedef true_type is_integer_type;
};

template<>
struct integer_traits<unsigned long long>
{
    typedef true_type is_integer_type;
};

}

#endif

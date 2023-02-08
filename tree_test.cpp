
#include "tree.hpp"

#include <gtest/gtest.h>

#include <utility>

using ft::tree;
using std::pair;

// tree ();
TEST(TreeConstructors, DefaultConstructor) {
  {
    tree<int> t;
    EXPECT_EQ(t.size(), 0);
  }
}

// explicit tree(const Compare& comp, const Allocator& alloc = Allocator());
TEST(TreeConstructors, CompareConstructor) {
  {
    tree<int, std::less<int>> t;
    EXPECT_EQ(t.size(), 0);
  }
}

// tree(const tree& other);
TEST(TreeConstructors, CopyConstructor) {
  {
    tree<int> t1;
    tree<int> t2(t1);
    EXPECT_EQ(t1.size(), t2.size());
  }
}

// tree& operator=(const tree& other);
TEST(TreeOperators, CopyAssignment) {
  {
    tree<int> t1;
    tree<int> t2 = t1;
    EXPECT_EQ(t1.size(), t2.size());
  }
}

// reference operator[](const_reference key);
TEST(TreeOperators, AtOperator) {
  {
    tree<int> t;
    EXPECT_FALSE(t[0]);
  }
}

// iterator begin() ft_noexcept;
TEST(TreeIterators, Begin) {
  {
    tree<int> t;
    EXPECT_EQ(t.begin(), t.begin());
  }
}

// iterator end() ft_noexcept;
TEST(TreeIterators, End) {
  {
    tree<int> t;
    EXPECT_EQ(t.begin(), t.end());
  }
}

// reverse_iterator rbegin() ft_noexcept;
TEST(TreeIterators, RBegin) {
  {
    tree<int> t;
    EXPECT_EQ(t.rbegin(), t.rbegin());
  }
}

// reverse_iterator rend() ft_noexcept;
TEST(TreeIterators, REnd) {
  {
    tree<int> t;
    EXPECT_EQ(t.rbegin(), t.rend());
  }
}

// bool empty() const ft_noexcept;
TEST(TreeCapacity, Empty) {
  {
    tree<int> t;
    EXPECT_TRUE(t.empty());
  }
}

// size_type size() const ft_noexcept;
TEST(TreeCapacity, Size) {
  {
    tree<int> t;
    EXPECT_EQ(t.size(), 0);
  }
}

// size_type max_size() const ft_noexcept;
TEST(TreeCapacity, MaxSize) {
  {
    tree<int> t;
    EXPECT_GT(t.max_size(), 100000);
  }
}

// void clear() ft_noexcept;
TEST(TreeModifiers, Clear) {
  {
    tree<int> t;
    t.clear();
    EXPECT_EQ(t.size(), 0);
  }
}

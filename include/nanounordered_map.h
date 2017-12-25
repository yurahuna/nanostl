/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Light Transport Entertainment, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef NANOSTL_UNORDERED_MAP_H_
#define NANOSTL_UNORDERED_MAP_H_

#include "nanoutility.h"  // nanostl::pair
#include "nanovector.h"

#ifdef NANOSTL_DEBUG
#include <iostream>
#endif

//
// Simple alternative implementation of std::unordered_map
//

namespace nanostl {

// TODO(LTE): Support Comparator and Allocator.
template <class Key, class T>
class unordered_map {
 public:
  typedef Key key_type;
  typedef nanostl::pair<const Key, T> value_type;
  typedef value_type& reference;
  typedef const value_type& const_reference;
  typedef value_type* pointer;
  typedef const value_type* const_pointer;

  /*
  class iterator {
    map<Key, T>* mp;
    Node* p;

   public:
    iterator(map<Key, T>* _mp = 0, Node* _p = 0) : mp(_mp), p(_p) {}
    iterator& operator++() {
      // O(log n)
      p = mp->__upper_bound(mp->root, p->val.first);
      return *this;
    }
    reference operator*() const { return p->val; }
    pointer operator->() const { return &(p->val); }
    bool operator==(const iterator& rhs) const {
      if (rhs.isEnd() && this->isEnd()) return true;
      return *rhs == this->p->val;
    }
    bool operator!=(const iterator& rhs) const {
      if (rhs.isEnd() && this->isEnd())
        return false;
      else if (rhs.isEnd() || this->isEnd())
        return true;
      return *rhs != this->p->val;
    }
    bool isEnd() const { return p == 0; }
  };

  typedef const iterator const_iterator;
  */

  unordered_map() {

  }

  ~unordered_map() {

  }

  // accessors:

  /*
  iterator begin() { return iterator(this, root); }
  iterator end() { return iterator(this, 0); }
  const_iterator end() const { return iterator(this, 0); }
  bool empty() const { return !root; }
  T& operator[](const key_type& k) {
    return (*((insert(value_type(k, T()))).first)).second;
  }
  */

  // insert/erase

  /*
  typedef pair<iterator, bool> pair_iterator_bool;
  pair_iterator_bool insert(const value_type& x) {
    pair<Node*, pair_iterator_bool> p = __insert(root, x);
    root = p.first;
    return p.second;
  }
  */

  // unordered_map operations:

  /*
  const_iterator find(const key_type& key) const {
    Node* t = __find(root, key);
    return (!t) ? this->end() : iterator(this, t);
  }
  */

  // debug:

  /*
  void print() {
#ifdef NANOSTL_DEBUG
    __print(root);
#endif
  }
  */

 private:
  vector<vector<value_type> > data;
};

}  // namespace nanostl

#endif  // NANOSTL_UNORDERED_MAP_H_

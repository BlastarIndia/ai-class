/*
 * The MIT License (MIT)
 * Copyright (c) 2011 Miguel Bernabeu Diaz <miguel.bernadi[AT]gmail[DOT]com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
 * associated documentation files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge, publish, distribute,
 * sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial
 * portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
 * LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN
 * NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef Path_H_
#define Path_H_

template <typename TreeType>
class Path
{
  public:
    typename TreeType::TreeNodeList _path;

    Path() { }
    Path(typename TreeType::value_type* Node) { addToPath(Node); }

//    Path(const Path<TreeType>& orig) { this->_path = orig._path; }

    void addToPath(typename TreeType::value_type* Node) { _path.push_back(Node); }

    //add comparison operator operator< for sorting by length.
};

#endif


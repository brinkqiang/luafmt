
// Copyright (c) 2018 brinkqiang (brink.qiang@gmail.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef __LUAFMT_H__
#define __LUAFMT_H__

#include "sol.hpp"
#include "dmlog.h"

class Cluafmt
{
public:
    Cluafmt(sol::this_state L);

    static void log(sol::this_state L, spdlog::level::level_enum lvl, const char* fmt, sol::variadic_args v);

    static void trace(sol::this_state, const char* fmt, sol::variadic_args v);
    static void debug(sol::this_state, const char* fmt, sol::variadic_args v);
    static void info(sol::this_state, const char* fmt, sol::variadic_args v);
    static void warn(sol::this_state, const char* fmt, sol::variadic_args v);
    static void error(sol::this_state, const char* fmt, sol::variadic_args v);
    static void critical(sol::this_state, const char* fmt, sol::variadic_args v);
    static void off(sol::this_state, const char* fmt, sol::variadic_args v);

    static std::string format(sol::this_state, const char* fmt, sol::variadic_args v);

private:
    sol::state_view m_oState;
};

#endif // __LUAFMT_H__
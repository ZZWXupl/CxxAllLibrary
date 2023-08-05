/**
* @file allsys.h
* This is a library that have all the standard library.
*/
#pragma once
#pragma warning(disable:4668 4365 5045 4996 4459 4514 4235 4355 5204 4820\
5039 5220 4625 4626 5026 5027 4820 4335)
#define _CRT_SECURE_NO_WARNINGS true //For MSVC++
#if defined(__cplusplus)
#if __cplusplus>260000L
#error "This program ONLY useable in C++26 or ealier!"
#endif
#if __cplusplus<230000 || defined(_MSC_VER)
#include <stdatomic.h>
#endif
#ifndef _MSC_VER
#include <threads.h>
#endif
#include <bitset>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <typeinfo>
#include <utility>
#include <memory>
#include <new>
#include <cfloat>
#include <climits>
#include <limits>
#include <cassert>
#include <cerrno>
#include <exception>
#include <stdexcept>
#include <cctype>
#include <cwchar>
#include <cwctype>
#include <string>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cmath>
#include <complex>
#include <numeric>
#include <valarray>
#include <clocale>
#include <locale>
#include <cstdio>
#include <fstream>
#include <iomanip>
#include <ios>
#include <iostream>
#include <istream>
#include <ostream>
#include <iosfwd>
#include <sstream>
#include <streambuf>
#if __cplusplus>=201103 || defined(_MSC_VER)
#include <chrono>
#include <initializer_list>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <scoped_allocator>
#include <cinttypes>
#include <cstdint>
#include <system_error>
#include <cuchar>
#include <array>
#include <forward_list>
#include <unordered_map>
#include <unordered_set>
#include <cfenv>
#include <random>
#include <ratio>
#include <regex>
#include <atomic>
#include <condition_variable>
#include <future>
#include <mutex>
#include <thread>
#include <stdnoreturn.h>
#if __cplusplus>201402L || defined(_MSC_VER) || _HAS_CXX14
#include <shared_mutex>
#if __cplusplus>201703L || defined(_MSC_VER) || _HAS_CXX17
#include <any>
#include <optional>
#include <variant>
#include <memory_resource>
#include <charconv>
#include <string_view>
#include <execution>
#include <filesystem>
#if __cplusplus>202000||defined(_MSC_VER) || _HAS_CXX20
#include <format>
#include <version>
#include <compare>
#include <span>
#include <ranges>
#include <bit>
#include <numbers>
#include <syncstream>
#include <barrier>
#if __cplusplus>230000||defined(_MSC_VER) || _HAS_CXX23
#ifndef _MSC_VER
#include <stdfloat>
#include <flat_map>
#include <flat_set>
#include <mdspan>
#include <generator>
#include <print>
#endif//C++23 Pure
#include <stacktrace>
#include <spanstream>
#if __cplusplus>260000
#include <text_encoding>
#include <rcu>
#include <hazard_pointer>
#endif//C++26( Pure)
#endif//C++23
#endif//C++20
#else
#include <codecvt>
#endif//C++17
#endif//C++14
#endif//C++11
#endif//C++
#if defined(_WIN32)||defined(_WIN64)
#include <windows.h>
#include <dos.h>
#include <windef.h>
#include <minwindef.h>
#include <winver.h>
#include <winusb.h>
#include <winusbio.h>
#include <winapifamily.h>
#include <winefs.h>
#include <winevt.h>
#include <winerror.h>
#include <winuser.rh>
#include <commctrl.rh>
#include <dde.rh>
#include <winnt.rh>
#include <dlgs.h>
#include <winver.h>
#endif//Windows
//AllOfTheLibraries

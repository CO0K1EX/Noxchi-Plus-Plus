#pragma once

#ifdef _WIN32
#include <Windows.h>
#endif // _WIN32

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <chrono>
#include <thread>
#include <io.h>
#include <fcntl.h>

// ТИПАШ (Типы данных и контейнеры)
namespace нохчи
{
	using доллутерахь = int;
	using боккха_терахь = long long;
	using доца_терахь = short;
	using сиз = std::string;
	using шуьйрачу_символийн_могӀа = std::wstring;
	using символ = char;
	using булан = bool;
	using лела_точка = float;
	using нийса_лела_точка = double;
	using хумма_яц = void;

	template<typename T>
	using гулам = std::vector<T>;
	template <typename K, typename V>
	using карта = std::map<K, V>;
}

// ЛОГИКА (Управления кострукции)
#define нагахьсанна if
#define кхечутайпана else
#define на for
#define цкъачунна while
#define лакъорг switch
#define гӀуллакх case
#define садаӀар break
#define цаалар default
#define юхадало return
#define кхосса throw
#define лаца catch

// Логические константы
#define бакъ true
#define харц false

// ДАГАРДАР (Ввод, вывод и консоль)
#define хаам(...) std::wcout << __VA_ARGS__ << std::endl
#define кхайкха(...) std::wcout << __VA_ARGS__
#define лаха(...) std::wcin >>__VA_ARGS__
#define цӀанде system("cls")
#define сацангӀа std::wcin.get()

// ТАЙПАШ (ООП и классы)
#define тайпа class
#define структура struct
#define массеран public
#define долахь private
#define лардеш protected
#define хӀокху this
#define керла new

// НОХЧИ_МЕХАНИЗМ (Системные функции)
inline void нисде_консоль() {
#ifdef _WIN32
	_setmode(_fileno(stdout), _O_U16TEXT);
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stderr), _O_U16TEXT);
#endif // _WIN32
}
#define набян(мс) std::this_thread::sleep_for(std::chrono::milliseconds(мс))
#define БОЛХ_БОЛО int main() { \
	нисде_консоль();
#define БОЛХ_ЧЕКХБЕЛИ return 0; }

// КОРТА (Функции/Определения)
#define функции auto
#define даиман const
#define листар auto&
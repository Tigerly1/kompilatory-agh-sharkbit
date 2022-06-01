/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

//
//  main.cpp
//  antlr4-cpp-demo
//
//  Created by Mike Lischke on 13.03.16.
//

#include <iostream>

#include "cmake-build-debug/antlr4_runtime/src/antlr4_runtime/runtime/Cpp/runtime/src/antlr4-runtime.h"
#include "sharkbitLexer.h"
#include "sharkbitParser.h"

#include <Windows.h>

#pragma execution_character_set("utf-8")

using namespace antlrcpptest;
using namespace antlr4;

int main(int argc, const char * argv[]) {

  ANTLRInputStream input("int cos = 1;");
  sharkbitLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  sharkbitParser parser(&tokens);
  tree::ParseTree *tree = parser.main();

  std::wstring s = antlrcpp::s2ws(tree->toStringTree(&parser)) + L"\n";

  std::wcout << "Parse Tree: " << s << std::endl; //Unicode output in the console is very limited.

  return 0;
}

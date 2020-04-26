#ifndef clox_compiler_h
#define clox_compiler_h
#include "chunk.h"
#include "common.h"
#include "compile.h"
#include "scanner.h"
#include "object.h"
#include "vm.h"


bool compile(const char* source, Chunk* chunk);
static void consume(TokenType type, const char* message);
static void endCompiler();
static void errorAtCurrent(const char* message);
static void emitReturn();
static void emitConstant(Value value);
static uint8_t makeConstant(Value value);
#endif



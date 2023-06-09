#pragma once
#include "common.h"

enum Bytecode : u8 {
    OpPop,
    OpReturn,
    OpConstant,
    OpTrue,
    OpFalse,
    OpNone,
    OpAdd,
    OpSubtract,
    OpMultiply,
    OpDivide,
    OpEqual,
    OpNotEqual,
    OpGreater,
    OpLess,
    OpGreaterEqual,
    OpLessEqual,
    OpNot,
    OpNegate,
    OpPrint,
    OpDefineGlobal,
    OpGetGlobal,
    OpSetGlobal,
    OpGetLocal,
    OpSetLocal,
    OpGetUpValue,
    OpSetUpValue,
    OpCloseUpValue,
    OpJump,
    OpJumpBack,
    OpJumpIfTrue,
    OpJumpIfFalse,
    OpCall,
    OpClosure,
    OpClass,
    OpGetProperty,
    OpSetProperty,
    OpMethod,
    OpInvoke,
    OpInherit,
    OpGetSuper
};

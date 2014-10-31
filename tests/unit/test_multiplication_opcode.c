/* Copyright 2014 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "globals.h"
#include "interpreter.h"
#include "mem-allocator.h"
#include "opcodes.h"
#include "serializer.h"
#include "common.h"

/**
 * Unit test's main function.
 */
int
main( int __unused argc,
      char __unused **argv)
{
  const opcode_t test_program[] = {
    getop_reg_var_decl( 255, 255),
    getop_var_decl( 0),
    getop_var_decl( 1),
    getop_assignment( 0, OPCODE_ARG_TYPE_SMALLINT, 253),
    getop_assignment( 1, OPCODE_ARG_TYPE_NUMBER, 2),
    getop_multiplication( 0, 0, 1),
    getop_exitval( 0)
  };

  mem_init();
  serializer_init (false);

  const literal lits[] = { LP("a"), 
                           LP("b"),
                           NUM(2.0) };
  serializer_dump_literals (lits, 3);

  init_int( test_program, false);

  bool status = run_int();

  serializer_free ();
  mem_finalize (false);

  return (status ? 0 : 1);
} /* main */

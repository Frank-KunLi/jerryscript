/* Copyright JS Foundation and other contributors, http://js.foundation
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

/*
 * Int8Array description
 */

#include "ecma-builtin-helpers-macro-defines.inc.h"

/* ES2015 22.2.5 */
NUMBER_VALUE (LIT_MAGIC_STRING_LENGTH,
              3,
              ECMA_PROPERTY_FIXED)

/* ES2015 22.2.5.1 */
NUMBER_VALUE (LIT_MAGIC_STRING_BYTES_PER_ELEMENT_U,
              1,
              ECMA_PROPERTY_FIXED)

/* ES2015 22.2.5 */
NUMBER_VALUE (LIT_MAGIC_STRING_LENGTH,
              3,
              ECMA_PROPERTY_FIXED)

/* ES2015 22.2.5 */
STRING_VALUE (LIT_MAGIC_STRING_NAME,
              LIT_MAGIC_STRING_INT8_ARRAY_UL,
              ECMA_PROPERTY_FIXED)

/* ES2015 22.2.5.2 */
OBJECT_VALUE (LIT_MAGIC_STRING_PROTOTYPE,
              ECMA_BUILTIN_ID_INT8ARRAY_PROTOTYPE,
              ECMA_PROPERTY_FIXED)

#include "ecma-builtin-helpers-macro-undefs.inc.h"

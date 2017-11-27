﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/acm/model/ValidationMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACM
  {
    namespace Model
    {
      namespace ValidationMethodMapper
      {

        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
        static const int DNS_HASH = HashingUtils::HashString("DNS");


        ValidationMethod GetValidationMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMAIL_HASH)
          {
            return ValidationMethod::EMAIL;
          }
          else if (hashCode == DNS_HASH)
          {
            return ValidationMethod::DNS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationMethod>(hashCode);
          }

          return ValidationMethod::NOT_SET;
        }

        Aws::String GetNameForValidationMethod(ValidationMethod enumValue)
        {
          switch(enumValue)
          {
          case ValidationMethod::EMAIL:
            return "EMAIL";
          case ValidationMethod::DNS:
            return "DNS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ValidationMethodMapper
    } // namespace Model
  } // namespace ACM
} // namespace Aws
/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AttributePayload.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the CreateThing operation.</p>
   */
  class AWS_IOT_API CreateThingRequest : public IoTRequest
  {
  public:
    CreateThingRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the thing.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing.</p>
     */
    inline CreateThingRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing.</p>
     */
    inline CreateThingRequest& WithThingName(Aws::String&& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing.</p>
     */
    inline CreateThingRequest& WithThingName(const char* value) { SetThingName(value); return *this;}

    /**
     * <p>The attribute payload, which consists of up to 3 name/value pairs in a JSON
     * document (for example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline const AttributePayload& GetAttributePayload() const{ return m_attributePayload; }

    /**
     * <p>The attribute payload, which consists of up to 3 name/value pairs in a JSON
     * document (for example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline void SetAttributePayload(const AttributePayload& value) { m_attributePayloadHasBeenSet = true; m_attributePayload = value; }

    /**
     * <p>The attribute payload, which consists of up to 3 name/value pairs in a JSON
     * document (for example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline void SetAttributePayload(AttributePayload&& value) { m_attributePayloadHasBeenSet = true; m_attributePayload = value; }

    /**
     * <p>The attribute payload, which consists of up to 3 name/value pairs in a JSON
     * document (for example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline CreateThingRequest& WithAttributePayload(const AttributePayload& value) { SetAttributePayload(value); return *this;}

    /**
     * <p>The attribute payload, which consists of up to 3 name/value pairs in a JSON
     * document (for example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline CreateThingRequest& WithAttributePayload(AttributePayload&& value) { SetAttributePayload(value); return *this;}

  private:
    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;
    AttributePayload m_attributePayload;
    bool m_attributePayloadHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

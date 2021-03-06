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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ListRecordHistorySearchFilter.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API ListRecordHistoryRequest : public ServiceCatalogRequest
  {
  public:
    ListRecordHistoryRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Optional language code. Supported language codes are as follows:</p> <p>"en"
     * (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p> <p>If no code is
     * specified, "en" is used as the default.</p>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>Optional language code. Supported language codes are as follows:</p> <p>"en"
     * (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p> <p>If no code is
     * specified, "en" is used as the default.</p>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>Optional language code. Supported language codes are as follows:</p> <p>"en"
     * (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p> <p>If no code is
     * specified, "en" is used as the default.</p>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>Optional language code. Supported language codes are as follows:</p> <p>"en"
     * (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p> <p>If no code is
     * specified, "en" is used as the default.</p>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>Optional language code. Supported language codes are as follows:</p> <p>"en"
     * (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p> <p>If no code is
     * specified, "en" is used as the default.</p>
     */
    inline ListRecordHistoryRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>Optional language code. Supported language codes are as follows:</p> <p>"en"
     * (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p> <p>If no code is
     * specified, "en" is used as the default.</p>
     */
    inline ListRecordHistoryRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>Optional language code. Supported language codes are as follows:</p> <p>"en"
     * (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p> <p>If no code is
     * specified, "en" is used as the default.</p>
     */
    inline ListRecordHistoryRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>(Optional) The filter to limit search results. </p>
     */
    inline const ListRecordHistorySearchFilter& GetSearchFilter() const{ return m_searchFilter; }

    /**
     * <p>(Optional) The filter to limit search results. </p>
     */
    inline void SetSearchFilter(const ListRecordHistorySearchFilter& value) { m_searchFilterHasBeenSet = true; m_searchFilter = value; }

    /**
     * <p>(Optional) The filter to limit search results. </p>
     */
    inline void SetSearchFilter(ListRecordHistorySearchFilter&& value) { m_searchFilterHasBeenSet = true; m_searchFilter = value; }

    /**
     * <p>(Optional) The filter to limit search results. </p>
     */
    inline ListRecordHistoryRequest& WithSearchFilter(const ListRecordHistorySearchFilter& value) { SetSearchFilter(value); return *this;}

    /**
     * <p>(Optional) The filter to limit search results. </p>
     */
    inline ListRecordHistoryRequest& WithSearchFilter(ListRecordHistorySearchFilter&& value) { SetSearchFilter(value); return *this;}

    /**
     * <p>The maximum number of items to return in the results. If more results exist
     * than fit in the specified <code>PageSize</code>, the value of
     * <code>NextPageToken</code> in the response is non-null.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of items to return in the results. If more results exist
     * than fit in the specified <code>PageSize</code>, the value of
     * <code>NextPageToken</code> in the response is non-null.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of items to return in the results. If more results exist
     * than fit in the specified <code>PageSize</code>, the value of
     * <code>NextPageToken</code> in the response is non-null.</p>
     */
    inline ListRecordHistoryRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

    /**
     * <p>The page token of the first page retrieve. If null, this retrieves the first
     * page of size <code>PageSize</code>.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }

    /**
     * <p>The page token of the first page retrieve. If null, this retrieves the first
     * page of size <code>PageSize</code>.</p>
     */
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>The page token of the first page retrieve. If null, this retrieves the first
     * page of size <code>PageSize</code>.</p>
     */
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>The page token of the first page retrieve. If null, this retrieves the first
     * page of size <code>PageSize</code>.</p>
     */
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }

    /**
     * <p>The page token of the first page retrieve. If null, this retrieves the first
     * page of size <code>PageSize</code>.</p>
     */
    inline ListRecordHistoryRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>The page token of the first page retrieve. If null, this retrieves the first
     * page of size <code>PageSize</code>.</p>
     */
    inline ListRecordHistoryRequest& WithPageToken(Aws::String&& value) { SetPageToken(value); return *this;}

    /**
     * <p>The page token of the first page retrieve. If null, this retrieves the first
     * page of size <code>PageSize</code>.</p>
     */
    inline ListRecordHistoryRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}

  private:
    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;
    ListRecordHistorySearchFilter m_searchFilter;
    bool m_searchFilterHasBeenSet;
    int m_pageSize;
    bool m_pageSizeHasBeenSet;
    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws

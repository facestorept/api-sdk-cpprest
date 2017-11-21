/**
 * Facestore API
 * This is a reference to Facestore API.  # Introduction This API is documented in **OpenAPI format** and provided by [facestore.pt](http://facestore.pt) team.  # About the API Through the Facestore API your applications can retrieve and manage Facestore platform content in your store. The base address of the API is `https://api.facestore.pt`. There are several endpoints at that address, each with its own unique path. All endpoints are private and you need the permissions to access them. To get an API Token you have to be client of Facestore and access your personal account to request it (see the next topic).  # Get API Token To consume the Facestore API is take the unique token to identify your requests. You can do that accessing the store manager admin and doing the following steps: 1. Go to ``configurations > API`` section. 2. Copy the unique token.  # Requests The API is based on REST principles: data resources are accessed via standard HTTPS requests in UTF-8 format to an API endpoint. Where possible, the API strives to use appropriate HTTP verbs for each action: | VERB     | DESCRIPTION                                            | | -------- |:-------------:                                         | | GET      | Used for retrieving resources.                         | | POST     | Used for creating resources.                           | | PUT      | Used for changing/replacing resources or collections.  | | PATCH    | Used for changing/replacing partial resources.         | | DELETE   | Used for deleting resources.                           |  # Responses Response Status Codes The API uses the following response status codes, as defined in the RFC 2616 and RFC 6585:  | STATUS CODE | DESCRIPTION                                                                                                                                                                                                                       | |:-----------:|:---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------:| | 200         | OK - The request has succeeded. The client can read the result of the request in the body and the headers of the response.                                                                                                        | | 201         | Created - The request has been fulfilled and resulted in a new resource being created.                                                                                                                                            | | 202         | Accepted - The request has been accepted for processing, but the processing has not been completed.                                                                                                                               | | 204         | No Content - The request has succeeded but returns no message body.                                                                                                                                                               | | 304         | Not Modified. See Conditional requests.                                                                                                                                                                                           | | 400         | Bad Request - The request could not be understood by the server due to malformed syntax. The message body will contain more information; see Error Details.                                                                       | | 401         | Unauthorized - The request requires user authentication or, if the request included authorization credentials, authorization has been refused for those credentials.                                                              | | 403         | Forbidden - The server understood the request, but is refusing to fulfill it.                                                                                                                                                     | | 404         | Not Found - The requested resource could not be found. This error can be due to a temporary or permanent condition.                                                                                                               | | 429         | Too Many Requests - Rate limiting has been applied.                                                                                                                                                                               | | 500         | Internal Server Error. You should never receive this error because our clever coders catch them all ... but if you are unlucky enough to get one, please report it to us through a comment at the bottom of this page.            | | 502         | Bad Gateway - The server was acting as a gateway or proxy and received an invalid response from the upstream server.                                                                                                              | | 503         | Service Unavailable - The server is currently unable to handle the request due to a temporary condition which will be alleviated after some delay. You can choose to resend the request again.                                    |  # Rate limiting To make the API fast for everybody, rate limits apply.  Rate limiting is applied on an application basis (based on client id), regardless of how many users are using it.  If you get status code 429, it means that you have sent too many requests. If this happens, have a look in the Retry-After header, where you will see a number displayed. This is the amount of seconds that you need to wait, before you can retry sending your requests.  You can check the returned HTTP headers of any API request to see your current rate limit status:  ``` curl -i https://api.facestore.pt/v1/sample HTTP/1.1 200 OK Date: Mon, 01 Dec 2016 17:27:06 GMT Status: 200 OK X-RateLimit-Limit: 60 X-RateLimit-Remaining: 56 X-RateLimit-Reset: 1372700873 ```  The headers tell you everything you need to know about your current rate limit status:  | HEADER NAME           | DESCRIPTION                                                                     | |:---------------------:|:-------------------------------------------------------------------------------:| | X-RateLimit-Limit   | The maximum number of requests that the consumer is permitted to make per hour. | | X-RateLimit-Remaining | The number of requests remaining in the current rate limit window.              | | X-RateLimit-Reset   | The time at which the current rate limit window resets in UTC epoch seconds.    |  # Timestamps Timestamps are returned in ISO 8601 format as Coordinated Universal Time (UTC) with zero offset: YYYY-MM-DDTHH:MM:SSZ. If the time is imprecise (for example, the date/time of an product is created), an additional field will show the precision; see for example, created_at in an product object.  # Error Details The API uses the following format to describe unsuccessful responses, return information about the error as an error JSON object containing the following information::  | KEY         | VALUE TYPE   | VALUE DESCRIPTION | |:-----------:|:------------:|:-----------------:| | status_code | integer    | The HTTP status code (also returned in the response header; see Response Status Codes for more information). | | message     | string     | A short description of the cause of the error. | 
 *
 * OpenAPI spec version: 0.1.4
 * Contact: apihelp@facestore.pt
 *
 * NOTE: This class is auto generated by the swagger code generator 3.0.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#include "ApiClient.h"
#include "MultipartFormData.h"
#include "ModelBase.h"

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

ApiClient::ApiClient(std::shared_ptr<ApiConfiguration> configuration )
    : m_Configuration(configuration)
{
}
ApiClient::~ApiClient()
{
}

std::shared_ptr<ApiConfiguration> ApiClient::getConfiguration() const
{
    return m_Configuration;
}
void ApiClient::setConfiguration(std::shared_ptr<ApiConfiguration> configuration)
{
    m_Configuration = configuration;
}


utility::string_t ApiClient::parameterToString(utility::string_t value)
{
    return value;
}
utility::string_t ApiClient::parameterToString(int64_t value)
{
	std::stringstream valueAsStringStream;
	valueAsStringStream << value;
    return utility::conversions::to_string_t(valueAsStringStream.str());
}
utility::string_t ApiClient::parameterToString(int32_t value)
{
	std::stringstream valueAsStringStream;
	valueAsStringStream << value;
    return utility::conversions::to_string_t(valueAsStringStream.str());
}

utility::string_t ApiClient::parameterToString(float value)
{
    return utility::conversions::to_string_t(std::to_string(value));
}

utility::string_t ApiClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_string_t(value.to_string(utility::datetime::ISO_8601));
}

pplx::task<web::http::http_response> ApiClient::callApi(
    const utility::string_t& path,
    const utility::string_t& method,
    const std::map<utility::string_t, utility::string_t>& queryParams,
    const std::shared_ptr<IHttpBody> postBody,
    const std::map<utility::string_t, utility::string_t>& headerParams,
    const std::map<utility::string_t, utility::string_t>& formParams,
    const std::map<utility::string_t, std::shared_ptr<HttpContent>>& fileParams,
    const utility::string_t& contentType
) const
{
    if (postBody != nullptr && formParams.size() != 0)
    {
        throw ApiException(400, utility::conversions::to_string_t("Cannot have body and form params"));
    }

    if (postBody != nullptr && fileParams.size() != 0)
    {
        throw ApiException(400, utility::conversions::to_string_t("Cannot have body and file params"));
    }

    if (fileParams.size() > 0 && contentType != utility::conversions::to_string_t("multipart/form-data"))
    {
        throw ApiException(400, utility::conversions::to_string_t("Operations with file parameters must be called with multipart/form-data"));
    }

    web::http::client::http_client client(m_Configuration->getBaseUrl(), m_Configuration->getHttpConfig());

    web::http::http_request request;
    for ( auto& kvp : headerParams )
    {
        request.headers().add(kvp.first, kvp.second);
    }

    if (fileParams.size() > 0)
    {
        MultipartFormData uploadData;
        for (auto& kvp : formParams)
        {
            uploadData.add(ModelBase::toHttpContent(kvp.first, kvp.second));
        }
        for (auto& kvp : fileParams)
        {
            uploadData.add(ModelBase::toHttpContent(kvp.first, kvp.second));
        }
        std::stringstream data;
        uploadData.writeTo(data);
        auto bodyString = data.str();
        auto length = bodyString.size();
        request.set_body(concurrency::streams::bytestream::open_istream(std::move(bodyString)), length, utility::conversions::to_string_t("multipart/form-data; boundary=") + uploadData.getBoundary());
    }
    else
    {
        if (postBody != nullptr)
        {
            std::stringstream data;
            postBody->writeTo(data);
            auto bodyString = data.str();
            auto length = bodyString.size();
            request.set_body(concurrency::streams::bytestream::open_istream(std::move(bodyString)), length, contentType);
        }
        else
        {
            if (contentType == utility::conversions::to_string_t("application/json"))
            {
                web::json::value body_data = web::json::value::object();
                for (auto& kvp : formParams)
                {
                    body_data[kvp.first] = ModelBase::toJson(kvp.second);
                }
                if (!formParams.empty())
                {
                    request.set_body(body_data);
		}
            }
            else
            {
                web::http::uri_builder formData;
                for (auto& kvp : formParams)
                {
                    formData.append_query(kvp.first, kvp.second);
                }
                if (!formParams.empty())
                {
                    request.set_body(formData.query(), utility::conversions::to_string_t("application/x-www-form-urlencoded"));
                }
            }
        }
    }

    web::http::uri_builder builder(path);
    for (auto& kvp : queryParams)
    {
        builder.append_query(kvp.first, kvp.second);
    }
    request.set_request_uri(builder.to_uri());
    request.set_method(method);
    if ( !request.headers().has( web::http::header_names::user_agent ) )
    {
        request.headers().add( web::http::header_names::user_agent, m_Configuration->getUserAgent() );
    }

    return client.request(request);
}

}
}
}
}

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



#include "Customer.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Customer::Customer()
{
    m_Id = 0L;
    m_Firstname = utility::conversions::to_string_t("");
    m_FirstnameIsSet = false;
    m_Lastname = utility::conversions::to_string_t("");
    m_LastnameIsSet = false;
    m_Active = false;
    m_ActiveIsSet = false;
    m_BirhdayIsSet = false;
    m_Vat = 0L;
    m_VatIsSet = false;
    m_Email = utility::conversions::to_string_t("");
    m_EmailIsSet = false;
    m_Phone = utility::conversions::to_string_t("");
    m_PhoneIsSet = false;
    m_Company = utility::conversions::to_string_t("");
    m_CompanyIsSet = false;
    m_Gender = utility::conversions::to_string_t("");
    m_GenderIsSet = false;
    m_Received_newsletter = false;
    m_Received_newsletterIsSet = false;
    m_Created_at = utility::datetime();
    m_Created_atIsSet = false;
    m_Updated_at = utility::datetime();
    m_Updated_atIsSet = false;
}

Customer::~Customer()
{
}

void Customer::validate()
{
    // TODO: implement validation
}

web::json::value Customer::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    if(m_FirstnameIsSet)
    {
        val[utility::conversions::to_string_t("firstname")] = ModelBase::toJson(m_Firstname);
    }
    if(m_LastnameIsSet)
    {
        val[utility::conversions::to_string_t("lastname")] = ModelBase::toJson(m_Lastname);
    }
    if(m_ActiveIsSet)
    {
        val[utility::conversions::to_string_t("active")] = ModelBase::toJson(m_Active);
    }
    if(m_BirhdayIsSet)
    {
        val[utility::conversions::to_string_t("birhday")] = ModelBase::toJson(m_Birhday);
    }
    if(m_VatIsSet)
    {
        val[utility::conversions::to_string_t("vat")] = ModelBase::toJson(m_Vat);
    }
    if(m_EmailIsSet)
    {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(m_Email);
    }
    if(m_PhoneIsSet)
    {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(m_Phone);
    }
    if(m_CompanyIsSet)
    {
        val[utility::conversions::to_string_t("company")] = ModelBase::toJson(m_Company);
    }
    if(m_GenderIsSet)
    {
        val[utility::conversions::to_string_t("gender")] = ModelBase::toJson(m_Gender);
    }
    if(m_Received_newsletterIsSet)
    {
        val[utility::conversions::to_string_t("received_newsletter")] = ModelBase::toJson(m_Received_newsletter);
    }
    if(m_Created_atIsSet)
    {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(m_Created_at);
    }
    if(m_Updated_atIsSet)
    {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(m_Updated_at);
    }

    return val;
}

void Customer::fromJson(web::json::value& val)
{
    setId(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("id")]));
    if(val.has_field(utility::conversions::to_string_t("firstname")))
    {
        setFirstname(ModelBase::stringFromJson(val[utility::conversions::to_string_t("firstname")]));
    }
    if(val.has_field(utility::conversions::to_string_t("lastname")))
    {
        setLastname(ModelBase::stringFromJson(val[utility::conversions::to_string_t("lastname")]));
    }
    if(val.has_field(utility::conversions::to_string_t("active")))
    {
        setActive(ModelBase::boolFromJson(val[utility::conversions::to_string_t("active")]));
    }
    if(val.has_field(utility::conversions::to_string_t("birhday")))
    {
        if(!val[utility::conversions::to_string_t("birhday")].is_null())
        {
            utility::datetime newItem(utility::datetime());
            newItem->fromJson(val[utility::conversions::to_string_t("birhday")]);
            setBirhday( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vat")))
    {
        setVat(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("vat")]));
    }
    if(val.has_field(utility::conversions::to_string_t("email")))
    {
        setEmail(ModelBase::stringFromJson(val[utility::conversions::to_string_t("email")]));
    }
    if(val.has_field(utility::conversions::to_string_t("phone")))
    {
        setPhone(ModelBase::stringFromJson(val[utility::conversions::to_string_t("phone")]));
    }
    if(val.has_field(utility::conversions::to_string_t("company")))
    {
        setCompany(ModelBase::stringFromJson(val[utility::conversions::to_string_t("company")]));
    }
    if(val.has_field(utility::conversions::to_string_t("gender")))
    {
        setGender(ModelBase::stringFromJson(val[utility::conversions::to_string_t("gender")]));
    }
    if(val.has_field(utility::conversions::to_string_t("received_newsletter")))
    {
        setReceivedNewsletter(ModelBase::boolFromJson(val[utility::conversions::to_string_t("received_newsletter")]));
    }
    if(val.has_field(utility::conversions::to_string_t("created_at")))
    {
        setCreatedAt(ModelBase::dateFromJson(val[utility::conversions::to_string_t("created_at")]));
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at")))
    {
        setUpdatedAt(ModelBase::dateFromJson(val[utility::conversions::to_string_t("updated_at")]));
    }
}

void Customer::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    if(m_FirstnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("firstname"), m_Firstname));
        
    }
    if(m_LastnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastname"), m_Lastname));
        
    }
    if(m_ActiveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("active"), m_Active));
    }
    if(m_BirhdayIsSet)
    {
        if (m_Birhday.get())
        {
            m_Birhday->toMultipart(multipart, utility::conversions::to_string_t("birhday."));
        }
        
    }
    if(m_VatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("vat"), m_Vat));
    }
    if(m_EmailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("email"), m_Email));
        
    }
    if(m_PhoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phone"), m_Phone));
        
    }
    if(m_CompanyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("company"), m_Company));
        
    }
    if(m_GenderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("gender"), m_Gender));
        
    }
    if(m_Received_newsletterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("received_newsletter"), m_Received_newsletter));
    }
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("created_at"), m_Created_at));
        
    }
    if(m_Updated_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updated_at"), m_Updated_at));
        
    }
}

void Customer::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    if(multipart->hasContent(utility::conversions::to_string_t("firstname")))
    {
        setFirstname(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("firstname"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lastname")))
    {
        setLastname(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastname"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("active")))
    {
        setActive(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("active"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("birhday")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("birhday")))
        {
            utility::datetime newItem(utility::datetime());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("birhday."));
            setBirhday( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("vat")))
    {
        setVat(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("vat"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("email")))
    {
        setEmail(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("email"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("phone")))
    {
        setPhone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("phone"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("company")))
    {
        setCompany(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("company"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("gender")))
    {
        setGender(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("gender"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("received_newsletter")))
    {
        setReceivedNewsletter(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("received_newsletter"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("created_at")))
    {
        setCreatedAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("created_at"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updated_at")))
    {
        setUpdatedAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("updated_at"))));
    }
}

int64_t Customer::getId() const
{
    return m_Id;
}


void Customer::setId(int64_t value)
{
    m_Id = value;
    
}
utility::string_t Customer::getFirstname() const
{
    return m_Firstname;
}


void Customer::setFirstname(utility::string_t value)
{
    m_Firstname = value;
    m_FirstnameIsSet = true;
}
bool Customer::firstnameIsSet() const
{
    return m_FirstnameIsSet;
}

void Customer::unsetFirstname()
{
    m_FirstnameIsSet = false;
}

utility::string_t Customer::getLastname() const
{
    return m_Lastname;
}


void Customer::setLastname(utility::string_t value)
{
    m_Lastname = value;
    m_LastnameIsSet = true;
}
bool Customer::lastnameIsSet() const
{
    return m_LastnameIsSet;
}

void Customer::unsetLastname()
{
    m_LastnameIsSet = false;
}

bool Customer::isActive() const
{
    return m_Active;
}


void Customer::setActive(bool value)
{
    m_Active = value;
    m_ActiveIsSet = true;
}
bool Customer::activeIsSet() const
{
    return m_ActiveIsSet;
}

void Customer::unsetActive()
{
    m_ActiveIsSet = false;
}

utility::datetime Customer::getBirhday() const
{
    return m_Birhday;
}


void Customer::setBirhday(utility::datetime value)
{
    m_Birhday = value;
    m_BirhdayIsSet = true;
}
bool Customer::birhdayIsSet() const
{
    return m_BirhdayIsSet;
}

void Customer::unsetBirhday()
{
    m_BirhdayIsSet = false;
}

int64_t Customer::getVat() const
{
    return m_Vat;
}


void Customer::setVat(int64_t value)
{
    m_Vat = value;
    m_VatIsSet = true;
}
bool Customer::vatIsSet() const
{
    return m_VatIsSet;
}

void Customer::unsetVat()
{
    m_VatIsSet = false;
}

utility::string_t Customer::getEmail() const
{
    return m_Email;
}


void Customer::setEmail(utility::string_t value)
{
    m_Email = value;
    m_EmailIsSet = true;
}
bool Customer::emailIsSet() const
{
    return m_EmailIsSet;
}

void Customer::unsetEmail()
{
    m_EmailIsSet = false;
}

utility::string_t Customer::getPhone() const
{
    return m_Phone;
}


void Customer::setPhone(utility::string_t value)
{
    m_Phone = value;
    m_PhoneIsSet = true;
}
bool Customer::phoneIsSet() const
{
    return m_PhoneIsSet;
}

void Customer::unsetPhone()
{
    m_PhoneIsSet = false;
}

utility::string_t Customer::getCompany() const
{
    return m_Company;
}


void Customer::setCompany(utility::string_t value)
{
    m_Company = value;
    m_CompanyIsSet = true;
}
bool Customer::companyIsSet() const
{
    return m_CompanyIsSet;
}

void Customer::unsetCompany()
{
    m_CompanyIsSet = false;
}

utility::string_t Customer::getGender() const
{
    return m_Gender;
}


void Customer::setGender(utility::string_t value)
{
    m_Gender = value;
    m_GenderIsSet = true;
}
bool Customer::genderIsSet() const
{
    return m_GenderIsSet;
}

void Customer::unsetGender()
{
    m_GenderIsSet = false;
}

bool Customer::isReceivedNewsletter() const
{
    return m_Received_newsletter;
}


void Customer::setReceivedNewsletter(bool value)
{
    m_Received_newsletter = value;
    m_Received_newsletterIsSet = true;
}
bool Customer::receivedNewsletterIsSet() const
{
    return m_Received_newsletterIsSet;
}

void Customer::unsetReceived_newsletter()
{
    m_Received_newsletterIsSet = false;
}

utility::datetime Customer::getCreatedAt() const
{
    return m_Created_at;
}


void Customer::setCreatedAt(utility::datetime value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}
bool Customer::createdAtIsSet() const
{
    return m_Created_atIsSet;
}

void Customer::unsetCreated_at()
{
    m_Created_atIsSet = false;
}

utility::datetime Customer::getUpdatedAt() const
{
    return m_Updated_at;
}


void Customer::setUpdatedAt(utility::datetime value)
{
    m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool Customer::updatedAtIsSet() const
{
    return m_Updated_atIsSet;
}

void Customer::unsetUpdated_at()
{
    m_Updated_atIsSet = false;
}

}
}
}
}


/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]  
 *
 * OpenAPI spec version: 0.2.10
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * OderBookRes.h
 *
 * Get the orderbook response
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_OderBookRes_H_
#define IO_SWAGGER_CLIENT_MODEL_OderBookRes_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Get the orderbook response
/// </summary>
class  OderBookRes
    : public ModelBase
{
public:
    OderBookRes();
    virtual ~OderBookRes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OderBookRes members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSymbol() const;
    bool symbolIsSet() const;
    void unsetSymbol();
    void setSymbol(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPrice() const;
    bool priceIsSet() const;
    void unsetPrice();
    void setPrice(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getSize() const;
    bool sizeIsSet() const;
    void unsetSize();
    void setSize(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSide() const;
    bool sideIsSet() const;
    void unsetSide();
    void setSide(utility::string_t value);

protected:
    utility::string_t m_Symbol;
    bool m_SymbolIsSet;
    utility::string_t m_Price;
    bool m_PriceIsSet;
    double m_Size;
    bool m_SizeIsSet;
    utility::string_t m_Side;
    bool m_SideIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_OderBookRes_H_ */

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



#include "QueryOrderRes.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

QueryOrderRes::QueryOrderRes()
{
    m_Order_id = utility::conversions::to_string_t("");
    m_Order_idIsSet = false;
    m_User_id = 0.0;
    m_User_idIsSet = false;
    m_Symbol = utility::conversions::to_string_t("");
    m_SymbolIsSet = false;
    m_Side = utility::conversions::to_string_t("");
    m_SideIsSet = false;
    m_Order_type = utility::conversions::to_string_t("");
    m_Order_typeIsSet = false;
    m_Price = 0.0;
    m_PriceIsSet = false;
    m_Qty = utility::conversions::to_string_t("");
    m_QtyIsSet = false;
    m_Time_in_force = utility::conversions::to_string_t("");
    m_Time_in_forceIsSet = false;
    m_Order_status = utility::conversions::to_string_t("");
    m_Order_statusIsSet = false;
    m_Ext_fieldsIsSet = false;
    m_Leaves_qty = 0.0;
    m_Leaves_qtyIsSet = false;
    m_Leaves_value = 0.0;
    m_Leaves_valueIsSet = false;
    m_Cum_exec_qty = 0.0;
    m_Cum_exec_qtyIsSet = false;
    m_Reject_reason = utility::conversions::to_string_t("");
    m_Reject_reasonIsSet = false;
    m_Order_link_id = utility::conversions::to_string_t("");
    m_Order_link_idIsSet = false;
    m_Created_at = utility::conversions::to_string_t("");
    m_Created_atIsSet = false;
    m_Updated_at = utility::conversions::to_string_t("");
    m_Updated_atIsSet = false;
}

QueryOrderRes::~QueryOrderRes()
{
}

void QueryOrderRes::validate()
{
    // TODO: implement validation
}

web::json::value QueryOrderRes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Order_idIsSet)
    {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(m_Order_id);
    }
    if(m_User_idIsSet)
    {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(m_User_id);
    }
    if(m_SymbolIsSet)
    {
        val[utility::conversions::to_string_t("symbol")] = ModelBase::toJson(m_Symbol);
    }
    if(m_SideIsSet)
    {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(m_Side);
    }
    if(m_Order_typeIsSet)
    {
        val[utility::conversions::to_string_t("order_type")] = ModelBase::toJson(m_Order_type);
    }
    if(m_PriceIsSet)
    {
        val[utility::conversions::to_string_t("price")] = ModelBase::toJson(m_Price);
    }
    if(m_QtyIsSet)
    {
        val[utility::conversions::to_string_t("qty")] = ModelBase::toJson(m_Qty);
    }
    if(m_Time_in_forceIsSet)
    {
        val[utility::conversions::to_string_t("time_in_force")] = ModelBase::toJson(m_Time_in_force);
    }
    if(m_Order_statusIsSet)
    {
        val[utility::conversions::to_string_t("order_status")] = ModelBase::toJson(m_Order_status);
    }
    if(m_Ext_fieldsIsSet)
    {
        val[utility::conversions::to_string_t("ext_fields")] = ModelBase::toJson(m_Ext_fields);
    }
    if(m_Leaves_qtyIsSet)
    {
        val[utility::conversions::to_string_t("leaves_qty")] = ModelBase::toJson(m_Leaves_qty);
    }
    if(m_Leaves_valueIsSet)
    {
        val[utility::conversions::to_string_t("leaves_value")] = ModelBase::toJson(m_Leaves_value);
    }
    if(m_Cum_exec_qtyIsSet)
    {
        val[utility::conversions::to_string_t("cum_exec_qty")] = ModelBase::toJson(m_Cum_exec_qty);
    }
    if(m_Reject_reasonIsSet)
    {
        val[utility::conversions::to_string_t("reject_reason")] = ModelBase::toJson(m_Reject_reason);
    }
    if(m_Order_link_idIsSet)
    {
        val[utility::conversions::to_string_t("order_link_id")] = ModelBase::toJson(m_Order_link_id);
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

void QueryOrderRes::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("order_id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("order_id")];
        if(!fieldValue.is_null())
        {
            setOrderId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("user_id")];
        if(!fieldValue.is_null())
        {
            setUserId(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("symbol")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("symbol")];
        if(!fieldValue.is_null())
        {
            setSymbol(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("side")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("side")];
        if(!fieldValue.is_null())
        {
            setSide(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_type")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("order_type")];
        if(!fieldValue.is_null())
        {
            setOrderType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("price")];
        if(!fieldValue.is_null())
        {
            setPrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qty")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("qty")];
        if(!fieldValue.is_null())
        {
            setQty(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_in_force")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("time_in_force")];
        if(!fieldValue.is_null())
        {
            setTimeInForce(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_status")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("order_status")];
        if(!fieldValue.is_null())
        {
            setOrderStatus(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ext_fields")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ext_fields")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(fieldValue);
            setExtFields( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("leaves_qty")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("leaves_qty")];
        if(!fieldValue.is_null())
        {
            setLeavesQty(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("leaves_value")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("leaves_value")];
        if(!fieldValue.is_null())
        {
            setLeavesValue(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cum_exec_qty")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("cum_exec_qty")];
        if(!fieldValue.is_null())
        {
            setCumExecQty(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reject_reason")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("reject_reason")];
        if(!fieldValue.is_null())
        {
            setRejectReason(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_link_id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("order_link_id")];
        if(!fieldValue.is_null())
        {
            setOrderLinkId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("created_at")];
        if(!fieldValue.is_null())
        {
            setCreatedAt(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("updated_at")];
        if(!fieldValue.is_null())
        {
            setUpdatedAt(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void QueryOrderRes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Order_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("order_id"), m_Order_id));
        
    }
    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("user_id"), m_User_id));
    }
    if(m_SymbolIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("symbol"), m_Symbol));
        
    }
    if(m_SideIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("side"), m_Side));
        
    }
    if(m_Order_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("order_type"), m_Order_type));
        
    }
    if(m_PriceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("price"), m_Price));
    }
    if(m_QtyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("qty"), m_Qty));
        
    }
    if(m_Time_in_forceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("time_in_force"), m_Time_in_force));
        
    }
    if(m_Order_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("order_status"), m_Order_status));
        
    }
    if(m_Ext_fieldsIsSet)
    {
        if (m_Ext_fields.get())
        {
            m_Ext_fields->toMultipart(multipart, utility::conversions::to_string_t("ext_fields."));
        }
        
    }
    if(m_Leaves_qtyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("leaves_qty"), m_Leaves_qty));
    }
    if(m_Leaves_valueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("leaves_value"), m_Leaves_value));
    }
    if(m_Cum_exec_qtyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cum_exec_qty"), m_Cum_exec_qty));
    }
    if(m_Reject_reasonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("reject_reason"), m_Reject_reason));
        
    }
    if(m_Order_link_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("order_link_id"), m_Order_link_id));
        
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

void QueryOrderRes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("order_id")))
    {
        setOrderId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("order_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("user_id")))
    {
        setUserId(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("user_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("symbol")))
    {
        setSymbol(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("symbol"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("side")))
    {
        setSide(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("side"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("order_type")))
    {
        setOrderType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("order_type"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("price")))
    {
        setPrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("qty")))
    {
        setQty(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("qty"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("time_in_force")))
    {
        setTimeInForce(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("time_in_force"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("order_status")))
    {
        setOrderStatus(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("order_status"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ext_fields")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("ext_fields")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("ext_fields."));
            setExtFields( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("leaves_qty")))
    {
        setLeavesQty(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("leaves_qty"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("leaves_value")))
    {
        setLeavesValue(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("leaves_value"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cum_exec_qty")))
    {
        setCumExecQty(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("cum_exec_qty"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("reject_reason")))
    {
        setRejectReason(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("reject_reason"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("order_link_id")))
    {
        setOrderLinkId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("order_link_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("created_at")))
    {
        setCreatedAt(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("created_at"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updated_at")))
    {
        setUpdatedAt(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("updated_at"))));
    }
}

utility::string_t QueryOrderRes::getOrderId() const
{
    return m_Order_id;
}


void QueryOrderRes::setOrderId(utility::string_t value)
{
    m_Order_id = value;
    m_Order_idIsSet = true;
}
bool QueryOrderRes::orderIdIsSet() const
{
    return m_Order_idIsSet;
}

void QueryOrderRes::unsetOrder_id()
{
    m_Order_idIsSet = false;
}

double QueryOrderRes::getUserId() const
{
    return m_User_id;
}


void QueryOrderRes::setUserId(double value)
{
    m_User_id = value;
    m_User_idIsSet = true;
}
bool QueryOrderRes::userIdIsSet() const
{
    return m_User_idIsSet;
}

void QueryOrderRes::unsetUser_id()
{
    m_User_idIsSet = false;
}

utility::string_t QueryOrderRes::getSymbol() const
{
    return m_Symbol;
}


void QueryOrderRes::setSymbol(utility::string_t value)
{
    m_Symbol = value;
    m_SymbolIsSet = true;
}
bool QueryOrderRes::symbolIsSet() const
{
    return m_SymbolIsSet;
}

void QueryOrderRes::unsetSymbol()
{
    m_SymbolIsSet = false;
}

utility::string_t QueryOrderRes::getSide() const
{
    return m_Side;
}


void QueryOrderRes::setSide(utility::string_t value)
{
    m_Side = value;
    m_SideIsSet = true;
}
bool QueryOrderRes::sideIsSet() const
{
    return m_SideIsSet;
}

void QueryOrderRes::unsetSide()
{
    m_SideIsSet = false;
}

utility::string_t QueryOrderRes::getOrderType() const
{
    return m_Order_type;
}


void QueryOrderRes::setOrderType(utility::string_t value)
{
    m_Order_type = value;
    m_Order_typeIsSet = true;
}
bool QueryOrderRes::orderTypeIsSet() const
{
    return m_Order_typeIsSet;
}

void QueryOrderRes::unsetOrder_type()
{
    m_Order_typeIsSet = false;
}

double QueryOrderRes::getPrice() const
{
    return m_Price;
}


void QueryOrderRes::setPrice(double value)
{
    m_Price = value;
    m_PriceIsSet = true;
}
bool QueryOrderRes::priceIsSet() const
{
    return m_PriceIsSet;
}

void QueryOrderRes::unsetPrice()
{
    m_PriceIsSet = false;
}

utility::string_t QueryOrderRes::getQty() const
{
    return m_Qty;
}


void QueryOrderRes::setQty(utility::string_t value)
{
    m_Qty = value;
    m_QtyIsSet = true;
}
bool QueryOrderRes::qtyIsSet() const
{
    return m_QtyIsSet;
}

void QueryOrderRes::unsetQty()
{
    m_QtyIsSet = false;
}

utility::string_t QueryOrderRes::getTimeInForce() const
{
    return m_Time_in_force;
}


void QueryOrderRes::setTimeInForce(utility::string_t value)
{
    m_Time_in_force = value;
    m_Time_in_forceIsSet = true;
}
bool QueryOrderRes::timeInForceIsSet() const
{
    return m_Time_in_forceIsSet;
}

void QueryOrderRes::unsetTime_in_force()
{
    m_Time_in_forceIsSet = false;
}

utility::string_t QueryOrderRes::getOrderStatus() const
{
    return m_Order_status;
}


void QueryOrderRes::setOrderStatus(utility::string_t value)
{
    m_Order_status = value;
    m_Order_statusIsSet = true;
}
bool QueryOrderRes::orderStatusIsSet() const
{
    return m_Order_statusIsSet;
}

void QueryOrderRes::unsetOrder_status()
{
    m_Order_statusIsSet = false;
}

std::shared_ptr<Object> QueryOrderRes::getExtFields() const
{
    return m_Ext_fields;
}


void QueryOrderRes::setExtFields(std::shared_ptr<Object> value)
{
    m_Ext_fields = value;
    m_Ext_fieldsIsSet = true;
}
bool QueryOrderRes::extFieldsIsSet() const
{
    return m_Ext_fieldsIsSet;
}

void QueryOrderRes::unsetExt_fields()
{
    m_Ext_fieldsIsSet = false;
}

double QueryOrderRes::getLeavesQty() const
{
    return m_Leaves_qty;
}


void QueryOrderRes::setLeavesQty(double value)
{
    m_Leaves_qty = value;
    m_Leaves_qtyIsSet = true;
}
bool QueryOrderRes::leavesQtyIsSet() const
{
    return m_Leaves_qtyIsSet;
}

void QueryOrderRes::unsetLeaves_qty()
{
    m_Leaves_qtyIsSet = false;
}

double QueryOrderRes::getLeavesValue() const
{
    return m_Leaves_value;
}


void QueryOrderRes::setLeavesValue(double value)
{
    m_Leaves_value = value;
    m_Leaves_valueIsSet = true;
}
bool QueryOrderRes::leavesValueIsSet() const
{
    return m_Leaves_valueIsSet;
}

void QueryOrderRes::unsetLeaves_value()
{
    m_Leaves_valueIsSet = false;
}

double QueryOrderRes::getCumExecQty() const
{
    return m_Cum_exec_qty;
}


void QueryOrderRes::setCumExecQty(double value)
{
    m_Cum_exec_qty = value;
    m_Cum_exec_qtyIsSet = true;
}
bool QueryOrderRes::cumExecQtyIsSet() const
{
    return m_Cum_exec_qtyIsSet;
}

void QueryOrderRes::unsetCum_exec_qty()
{
    m_Cum_exec_qtyIsSet = false;
}

utility::string_t QueryOrderRes::getRejectReason() const
{
    return m_Reject_reason;
}


void QueryOrderRes::setRejectReason(utility::string_t value)
{
    m_Reject_reason = value;
    m_Reject_reasonIsSet = true;
}
bool QueryOrderRes::rejectReasonIsSet() const
{
    return m_Reject_reasonIsSet;
}

void QueryOrderRes::unsetReject_reason()
{
    m_Reject_reasonIsSet = false;
}

utility::string_t QueryOrderRes::getOrderLinkId() const
{
    return m_Order_link_id;
}


void QueryOrderRes::setOrderLinkId(utility::string_t value)
{
    m_Order_link_id = value;
    m_Order_link_idIsSet = true;
}
bool QueryOrderRes::orderLinkIdIsSet() const
{
    return m_Order_link_idIsSet;
}

void QueryOrderRes::unsetOrder_link_id()
{
    m_Order_link_idIsSet = false;
}

utility::string_t QueryOrderRes::getCreatedAt() const
{
    return m_Created_at;
}


void QueryOrderRes::setCreatedAt(utility::string_t value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}
bool QueryOrderRes::createdAtIsSet() const
{
    return m_Created_atIsSet;
}

void QueryOrderRes::unsetCreated_at()
{
    m_Created_atIsSet = false;
}

utility::string_t QueryOrderRes::getUpdatedAt() const
{
    return m_Updated_at;
}


void QueryOrderRes::setUpdatedAt(utility::string_t value)
{
    m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool QueryOrderRes::updatedAtIsSet() const
{
    return m_Updated_atIsSet;
}

void QueryOrderRes::unsetUpdated_at()
{
    m_Updated_atIsSet = false;
}

}
}
}
}


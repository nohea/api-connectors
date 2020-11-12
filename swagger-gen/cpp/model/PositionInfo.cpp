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



#include "PositionInfo.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

PositionInfo::PositionInfo()
{
    m_Id = 0.0;
    m_IdIsSet = false;
    m_User_id = 0.0;
    m_User_idIsSet = false;
    m_Risk_id = 0.0;
    m_Risk_idIsSet = false;
    m_Symbol = utility::conversions::to_string_t("");
    m_SymbolIsSet = false;
    m_Side = utility::conversions::to_string_t("");
    m_SideIsSet = false;
    m_Size = 0.0;
    m_SizeIsSet = false;
    m_Position_value = 0.0;
    m_Position_valueIsSet = false;
    m_Entry_price = 0.0;
    m_Entry_priceIsSet = false;
    m_Leverage = 0.0;
    m_LeverageIsSet = false;
    m_Auto_add_margin = 0.0;
    m_Auto_add_marginIsSet = false;
    m_Position_margin = 0.0;
    m_Position_marginIsSet = false;
    m_Liq_price = 0.0;
    m_Liq_priceIsSet = false;
    m_Bust_price = 0.0;
    m_Bust_priceIsSet = false;
    m_Occ_closing_fee = 0.0;
    m_Occ_closing_feeIsSet = false;
    m_Occ_funding_fee = 0.0;
    m_Occ_funding_feeIsSet = false;
    m_Take_profit = 0.0;
    m_Take_profitIsSet = false;
    m_Stop_loss = 0.0;
    m_Stop_lossIsSet = false;
    m_Position_status = utility::conversions::to_string_t("");
    m_Position_statusIsSet = false;
    m_Deleverage_indicator = utility::conversions::to_string_t("");
    m_Deleverage_indicatorIsSet = false;
    m_Oc_calc_data = utility::conversions::to_string_t("");
    m_Oc_calc_dataIsSet = false;
    m_Order_margin = 0.0;
    m_Order_marginIsSet = false;
    m_Wallet_balance = 0.0;
    m_Wallet_balanceIsSet = false;
    m_Unrealised_pnl = 0.0;
    m_Unrealised_pnlIsSet = false;
    m_Realised_pnl = 0.0;
    m_Realised_pnlIsSet = false;
    m_Cum_realised_pnl = 0.0;
    m_Cum_realised_pnlIsSet = false;
    m_Cum_commission = 0.0;
    m_Cum_commissionIsSet = false;
    m_Cross_seq = 0.0;
    m_Cross_seqIsSet = false;
    m_Position_seq = 0.0;
    m_Position_seqIsSet = false;
    m_Created_at = utility::conversions::to_string_t("");
    m_Created_atIsSet = false;
    m_Updated_at = utility::conversions::to_string_t("");
    m_Updated_atIsSet = false;
}

PositionInfo::~PositionInfo()
{
}

void PositionInfo::validate()
{
    // TODO: implement validation
}

web::json::value PositionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_User_idIsSet)
    {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(m_User_id);
    }
    if(m_Risk_idIsSet)
    {
        val[utility::conversions::to_string_t("risk_id")] = ModelBase::toJson(m_Risk_id);
    }
    if(m_SymbolIsSet)
    {
        val[utility::conversions::to_string_t("symbol")] = ModelBase::toJson(m_Symbol);
    }
    if(m_SideIsSet)
    {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(m_Side);
    }
    if(m_SizeIsSet)
    {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(m_Size);
    }
    if(m_Position_valueIsSet)
    {
        val[utility::conversions::to_string_t("position_value")] = ModelBase::toJson(m_Position_value);
    }
    if(m_Entry_priceIsSet)
    {
        val[utility::conversions::to_string_t("entry_price")] = ModelBase::toJson(m_Entry_price);
    }
    if(m_LeverageIsSet)
    {
        val[utility::conversions::to_string_t("leverage")] = ModelBase::toJson(m_Leverage);
    }
    if(m_Auto_add_marginIsSet)
    {
        val[utility::conversions::to_string_t("auto_add_margin")] = ModelBase::toJson(m_Auto_add_margin);
    }
    if(m_Position_marginIsSet)
    {
        val[utility::conversions::to_string_t("position_margin")] = ModelBase::toJson(m_Position_margin);
    }
    if(m_Liq_priceIsSet)
    {
        val[utility::conversions::to_string_t("liq_price")] = ModelBase::toJson(m_Liq_price);
    }
    if(m_Bust_priceIsSet)
    {
        val[utility::conversions::to_string_t("bust_price")] = ModelBase::toJson(m_Bust_price);
    }
    if(m_Occ_closing_feeIsSet)
    {
        val[utility::conversions::to_string_t("occ_closing_fee")] = ModelBase::toJson(m_Occ_closing_fee);
    }
    if(m_Occ_funding_feeIsSet)
    {
        val[utility::conversions::to_string_t("occ_funding_fee")] = ModelBase::toJson(m_Occ_funding_fee);
    }
    if(m_Take_profitIsSet)
    {
        val[utility::conversions::to_string_t("take_profit")] = ModelBase::toJson(m_Take_profit);
    }
    if(m_Stop_lossIsSet)
    {
        val[utility::conversions::to_string_t("stop_loss")] = ModelBase::toJson(m_Stop_loss);
    }
    if(m_Position_statusIsSet)
    {
        val[utility::conversions::to_string_t("position_status")] = ModelBase::toJson(m_Position_status);
    }
    if(m_Deleverage_indicatorIsSet)
    {
        val[utility::conversions::to_string_t("deleverage_indicator")] = ModelBase::toJson(m_Deleverage_indicator);
    }
    if(m_Oc_calc_dataIsSet)
    {
        val[utility::conversions::to_string_t("oc_calc_data")] = ModelBase::toJson(m_Oc_calc_data);
    }
    if(m_Order_marginIsSet)
    {
        val[utility::conversions::to_string_t("order_margin")] = ModelBase::toJson(m_Order_margin);
    }
    if(m_Wallet_balanceIsSet)
    {
        val[utility::conversions::to_string_t("wallet_balance")] = ModelBase::toJson(m_Wallet_balance);
    }
    if(m_Unrealised_pnlIsSet)
    {
        val[utility::conversions::to_string_t("unrealised_pnl")] = ModelBase::toJson(m_Unrealised_pnl);
    }
    if(m_Realised_pnlIsSet)
    {
        val[utility::conversions::to_string_t("realised_pnl")] = ModelBase::toJson(m_Realised_pnl);
    }
    if(m_Cum_realised_pnlIsSet)
    {
        val[utility::conversions::to_string_t("cum_realised_pnl")] = ModelBase::toJson(m_Cum_realised_pnl);
    }
    if(m_Cum_commissionIsSet)
    {
        val[utility::conversions::to_string_t("cum_commission")] = ModelBase::toJson(m_Cum_commission);
    }
    if(m_Cross_seqIsSet)
    {
        val[utility::conversions::to_string_t("cross_seq")] = ModelBase::toJson(m_Cross_seq);
    }
    if(m_Position_seqIsSet)
    {
        val[utility::conversions::to_string_t("position_seq")] = ModelBase::toJson(m_Position_seq);
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

void PositionInfo::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::doubleFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("risk_id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("risk_id")];
        if(!fieldValue.is_null())
        {
            setRiskId(ModelBase::doubleFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("size")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("size")];
        if(!fieldValue.is_null())
        {
            setSize(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("position_value")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("position_value")];
        if(!fieldValue.is_null())
        {
            setPositionValue(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entry_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("entry_price")];
        if(!fieldValue.is_null())
        {
            setEntryPrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("leverage")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("leverage")];
        if(!fieldValue.is_null())
        {
            setLeverage(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_add_margin")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("auto_add_margin")];
        if(!fieldValue.is_null())
        {
            setAutoAddMargin(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("position_margin")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("position_margin")];
        if(!fieldValue.is_null())
        {
            setPositionMargin(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("liq_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("liq_price")];
        if(!fieldValue.is_null())
        {
            setLiqPrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bust_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("bust_price")];
        if(!fieldValue.is_null())
        {
            setBustPrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("occ_closing_fee")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("occ_closing_fee")];
        if(!fieldValue.is_null())
        {
            setOccClosingFee(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("occ_funding_fee")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("occ_funding_fee")];
        if(!fieldValue.is_null())
        {
            setOccFundingFee(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("take_profit")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("take_profit")];
        if(!fieldValue.is_null())
        {
            setTakeProfit(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stop_loss")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("stop_loss")];
        if(!fieldValue.is_null())
        {
            setStopLoss(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("position_status")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("position_status")];
        if(!fieldValue.is_null())
        {
            setPositionStatus(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleverage_indicator")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("deleverage_indicator")];
        if(!fieldValue.is_null())
        {
            setDeleverageIndicator(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oc_calc_data")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("oc_calc_data")];
        if(!fieldValue.is_null())
        {
            setOcCalcData(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_margin")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("order_margin")];
        if(!fieldValue.is_null())
        {
            setOrderMargin(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wallet_balance")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("wallet_balance")];
        if(!fieldValue.is_null())
        {
            setWalletBalance(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unrealised_pnl")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("unrealised_pnl")];
        if(!fieldValue.is_null())
        {
            setUnrealisedPnl(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("realised_pnl")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("realised_pnl")];
        if(!fieldValue.is_null())
        {
            setRealisedPnl(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cum_realised_pnl")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("cum_realised_pnl")];
        if(!fieldValue.is_null())
        {
            setCumRealisedPnl(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cum_commission")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("cum_commission")];
        if(!fieldValue.is_null())
        {
            setCumCommission(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cross_seq")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("cross_seq")];
        if(!fieldValue.is_null())
        {
            setCrossSeq(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("position_seq")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("position_seq")];
        if(!fieldValue.is_null())
        {
            setPositionSeq(ModelBase::doubleFromJson(fieldValue));
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

void PositionInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("user_id"), m_User_id));
    }
    if(m_Risk_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("risk_id"), m_Risk_id));
    }
    if(m_SymbolIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("symbol"), m_Symbol));
        
    }
    if(m_SideIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("side"), m_Side));
        
    }
    if(m_SizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("size"), m_Size));
    }
    if(m_Position_valueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("position_value"), m_Position_value));
    }
    if(m_Entry_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("entry_price"), m_Entry_price));
    }
    if(m_LeverageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("leverage"), m_Leverage));
    }
    if(m_Auto_add_marginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("auto_add_margin"), m_Auto_add_margin));
    }
    if(m_Position_marginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("position_margin"), m_Position_margin));
    }
    if(m_Liq_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("liq_price"), m_Liq_price));
    }
    if(m_Bust_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bust_price"), m_Bust_price));
    }
    if(m_Occ_closing_feeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("occ_closing_fee"), m_Occ_closing_fee));
    }
    if(m_Occ_funding_feeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("occ_funding_fee"), m_Occ_funding_fee));
    }
    if(m_Take_profitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("take_profit"), m_Take_profit));
    }
    if(m_Stop_lossIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("stop_loss"), m_Stop_loss));
    }
    if(m_Position_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("position_status"), m_Position_status));
        
    }
    if(m_Deleverage_indicatorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deleverage_indicator"), m_Deleverage_indicator));
        
    }
    if(m_Oc_calc_dataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("oc_calc_data"), m_Oc_calc_data));
        
    }
    if(m_Order_marginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("order_margin"), m_Order_margin));
    }
    if(m_Wallet_balanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("wallet_balance"), m_Wallet_balance));
    }
    if(m_Unrealised_pnlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("unrealised_pnl"), m_Unrealised_pnl));
    }
    if(m_Realised_pnlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("realised_pnl"), m_Realised_pnl));
    }
    if(m_Cum_realised_pnlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cum_realised_pnl"), m_Cum_realised_pnl));
    }
    if(m_Cum_commissionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cum_commission"), m_Cum_commission));
    }
    if(m_Cross_seqIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cross_seq"), m_Cross_seq));
    }
    if(m_Position_seqIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("position_seq"), m_Position_seq));
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

void PositionInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("user_id")))
    {
        setUserId(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("user_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("risk_id")))
    {
        setRiskId(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("risk_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("symbol")))
    {
        setSymbol(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("symbol"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("side")))
    {
        setSide(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("side"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("size")))
    {
        setSize(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("size"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("position_value")))
    {
        setPositionValue(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("position_value"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("entry_price")))
    {
        setEntryPrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("entry_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("leverage")))
    {
        setLeverage(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("leverage"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("auto_add_margin")))
    {
        setAutoAddMargin(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("auto_add_margin"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("position_margin")))
    {
        setPositionMargin(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("position_margin"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("liq_price")))
    {
        setLiqPrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("liq_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bust_price")))
    {
        setBustPrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("bust_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("occ_closing_fee")))
    {
        setOccClosingFee(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("occ_closing_fee"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("occ_funding_fee")))
    {
        setOccFundingFee(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("occ_funding_fee"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("take_profit")))
    {
        setTakeProfit(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("take_profit"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("stop_loss")))
    {
        setStopLoss(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("stop_loss"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("position_status")))
    {
        setPositionStatus(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("position_status"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("deleverage_indicator")))
    {
        setDeleverageIndicator(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("deleverage_indicator"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("oc_calc_data")))
    {
        setOcCalcData(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("oc_calc_data"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("order_margin")))
    {
        setOrderMargin(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("order_margin"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("wallet_balance")))
    {
        setWalletBalance(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("wallet_balance"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("unrealised_pnl")))
    {
        setUnrealisedPnl(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("unrealised_pnl"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("realised_pnl")))
    {
        setRealisedPnl(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("realised_pnl"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cum_realised_pnl")))
    {
        setCumRealisedPnl(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("cum_realised_pnl"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cum_commission")))
    {
        setCumCommission(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("cum_commission"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cross_seq")))
    {
        setCrossSeq(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("cross_seq"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("position_seq")))
    {
        setPositionSeq(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("position_seq"))));
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

double PositionInfo::getId() const
{
    return m_Id;
}


void PositionInfo::setId(double value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool PositionInfo::idIsSet() const
{
    return m_IdIsSet;
}

void PositionInfo::unsetId()
{
    m_IdIsSet = false;
}

double PositionInfo::getUserId() const
{
    return m_User_id;
}


void PositionInfo::setUserId(double value)
{
    m_User_id = value;
    m_User_idIsSet = true;
}
bool PositionInfo::userIdIsSet() const
{
    return m_User_idIsSet;
}

void PositionInfo::unsetUser_id()
{
    m_User_idIsSet = false;
}

double PositionInfo::getRiskId() const
{
    return m_Risk_id;
}


void PositionInfo::setRiskId(double value)
{
    m_Risk_id = value;
    m_Risk_idIsSet = true;
}
bool PositionInfo::riskIdIsSet() const
{
    return m_Risk_idIsSet;
}

void PositionInfo::unsetRisk_id()
{
    m_Risk_idIsSet = false;
}

utility::string_t PositionInfo::getSymbol() const
{
    return m_Symbol;
}


void PositionInfo::setSymbol(utility::string_t value)
{
    m_Symbol = value;
    m_SymbolIsSet = true;
}
bool PositionInfo::symbolIsSet() const
{
    return m_SymbolIsSet;
}

void PositionInfo::unsetSymbol()
{
    m_SymbolIsSet = false;
}

utility::string_t PositionInfo::getSide() const
{
    return m_Side;
}


void PositionInfo::setSide(utility::string_t value)
{
    m_Side = value;
    m_SideIsSet = true;
}
bool PositionInfo::sideIsSet() const
{
    return m_SideIsSet;
}

void PositionInfo::unsetSide()
{
    m_SideIsSet = false;
}

double PositionInfo::getSize() const
{
    return m_Size;
}


void PositionInfo::setSize(double value)
{
    m_Size = value;
    m_SizeIsSet = true;
}
bool PositionInfo::sizeIsSet() const
{
    return m_SizeIsSet;
}

void PositionInfo::unsetSize()
{
    m_SizeIsSet = false;
}

double PositionInfo::getPositionValue() const
{
    return m_Position_value;
}


void PositionInfo::setPositionValue(double value)
{
    m_Position_value = value;
    m_Position_valueIsSet = true;
}
bool PositionInfo::positionValueIsSet() const
{
    return m_Position_valueIsSet;
}

void PositionInfo::unsetPosition_value()
{
    m_Position_valueIsSet = false;
}

double PositionInfo::getEntryPrice() const
{
    return m_Entry_price;
}


void PositionInfo::setEntryPrice(double value)
{
    m_Entry_price = value;
    m_Entry_priceIsSet = true;
}
bool PositionInfo::entryPriceIsSet() const
{
    return m_Entry_priceIsSet;
}

void PositionInfo::unsetEntry_price()
{
    m_Entry_priceIsSet = false;
}

double PositionInfo::getLeverage() const
{
    return m_Leverage;
}


void PositionInfo::setLeverage(double value)
{
    m_Leverage = value;
    m_LeverageIsSet = true;
}
bool PositionInfo::leverageIsSet() const
{
    return m_LeverageIsSet;
}

void PositionInfo::unsetLeverage()
{
    m_LeverageIsSet = false;
}

double PositionInfo::getAutoAddMargin() const
{
    return m_Auto_add_margin;
}


void PositionInfo::setAutoAddMargin(double value)
{
    m_Auto_add_margin = value;
    m_Auto_add_marginIsSet = true;
}
bool PositionInfo::autoAddMarginIsSet() const
{
    return m_Auto_add_marginIsSet;
}

void PositionInfo::unsetAuto_add_margin()
{
    m_Auto_add_marginIsSet = false;
}

double PositionInfo::getPositionMargin() const
{
    return m_Position_margin;
}


void PositionInfo::setPositionMargin(double value)
{
    m_Position_margin = value;
    m_Position_marginIsSet = true;
}
bool PositionInfo::positionMarginIsSet() const
{
    return m_Position_marginIsSet;
}

void PositionInfo::unsetPosition_margin()
{
    m_Position_marginIsSet = false;
}

double PositionInfo::getLiqPrice() const
{
    return m_Liq_price;
}


void PositionInfo::setLiqPrice(double value)
{
    m_Liq_price = value;
    m_Liq_priceIsSet = true;
}
bool PositionInfo::liqPriceIsSet() const
{
    return m_Liq_priceIsSet;
}

void PositionInfo::unsetLiq_price()
{
    m_Liq_priceIsSet = false;
}

double PositionInfo::getBustPrice() const
{
    return m_Bust_price;
}


void PositionInfo::setBustPrice(double value)
{
    m_Bust_price = value;
    m_Bust_priceIsSet = true;
}
bool PositionInfo::bustPriceIsSet() const
{
    return m_Bust_priceIsSet;
}

void PositionInfo::unsetBust_price()
{
    m_Bust_priceIsSet = false;
}

double PositionInfo::getOccClosingFee() const
{
    return m_Occ_closing_fee;
}


void PositionInfo::setOccClosingFee(double value)
{
    m_Occ_closing_fee = value;
    m_Occ_closing_feeIsSet = true;
}
bool PositionInfo::occClosingFeeIsSet() const
{
    return m_Occ_closing_feeIsSet;
}

void PositionInfo::unsetOcc_closing_fee()
{
    m_Occ_closing_feeIsSet = false;
}

double PositionInfo::getOccFundingFee() const
{
    return m_Occ_funding_fee;
}


void PositionInfo::setOccFundingFee(double value)
{
    m_Occ_funding_fee = value;
    m_Occ_funding_feeIsSet = true;
}
bool PositionInfo::occFundingFeeIsSet() const
{
    return m_Occ_funding_feeIsSet;
}

void PositionInfo::unsetOcc_funding_fee()
{
    m_Occ_funding_feeIsSet = false;
}

double PositionInfo::getTakeProfit() const
{
    return m_Take_profit;
}


void PositionInfo::setTakeProfit(double value)
{
    m_Take_profit = value;
    m_Take_profitIsSet = true;
}
bool PositionInfo::takeProfitIsSet() const
{
    return m_Take_profitIsSet;
}

void PositionInfo::unsetTake_profit()
{
    m_Take_profitIsSet = false;
}

double PositionInfo::getStopLoss() const
{
    return m_Stop_loss;
}


void PositionInfo::setStopLoss(double value)
{
    m_Stop_loss = value;
    m_Stop_lossIsSet = true;
}
bool PositionInfo::stopLossIsSet() const
{
    return m_Stop_lossIsSet;
}

void PositionInfo::unsetStop_loss()
{
    m_Stop_lossIsSet = false;
}

utility::string_t PositionInfo::getPositionStatus() const
{
    return m_Position_status;
}


void PositionInfo::setPositionStatus(utility::string_t value)
{
    m_Position_status = value;
    m_Position_statusIsSet = true;
}
bool PositionInfo::positionStatusIsSet() const
{
    return m_Position_statusIsSet;
}

void PositionInfo::unsetPosition_status()
{
    m_Position_statusIsSet = false;
}

utility::string_t PositionInfo::getDeleverageIndicator() const
{
    return m_Deleverage_indicator;
}


void PositionInfo::setDeleverageIndicator(utility::string_t value)
{
    m_Deleverage_indicator = value;
    m_Deleverage_indicatorIsSet = true;
}
bool PositionInfo::deleverageIndicatorIsSet() const
{
    return m_Deleverage_indicatorIsSet;
}

void PositionInfo::unsetDeleverage_indicator()
{
    m_Deleverage_indicatorIsSet = false;
}

utility::string_t PositionInfo::getOcCalcData() const
{
    return m_Oc_calc_data;
}


void PositionInfo::setOcCalcData(utility::string_t value)
{
    m_Oc_calc_data = value;
    m_Oc_calc_dataIsSet = true;
}
bool PositionInfo::ocCalcDataIsSet() const
{
    return m_Oc_calc_dataIsSet;
}

void PositionInfo::unsetOc_calc_data()
{
    m_Oc_calc_dataIsSet = false;
}

double PositionInfo::getOrderMargin() const
{
    return m_Order_margin;
}


void PositionInfo::setOrderMargin(double value)
{
    m_Order_margin = value;
    m_Order_marginIsSet = true;
}
bool PositionInfo::orderMarginIsSet() const
{
    return m_Order_marginIsSet;
}

void PositionInfo::unsetOrder_margin()
{
    m_Order_marginIsSet = false;
}

double PositionInfo::getWalletBalance() const
{
    return m_Wallet_balance;
}


void PositionInfo::setWalletBalance(double value)
{
    m_Wallet_balance = value;
    m_Wallet_balanceIsSet = true;
}
bool PositionInfo::walletBalanceIsSet() const
{
    return m_Wallet_balanceIsSet;
}

void PositionInfo::unsetWallet_balance()
{
    m_Wallet_balanceIsSet = false;
}

double PositionInfo::getUnrealisedPnl() const
{
    return m_Unrealised_pnl;
}


void PositionInfo::setUnrealisedPnl(double value)
{
    m_Unrealised_pnl = value;
    m_Unrealised_pnlIsSet = true;
}
bool PositionInfo::unrealisedPnlIsSet() const
{
    return m_Unrealised_pnlIsSet;
}

void PositionInfo::unsetUnrealised_pnl()
{
    m_Unrealised_pnlIsSet = false;
}

double PositionInfo::getRealisedPnl() const
{
    return m_Realised_pnl;
}


void PositionInfo::setRealisedPnl(double value)
{
    m_Realised_pnl = value;
    m_Realised_pnlIsSet = true;
}
bool PositionInfo::realisedPnlIsSet() const
{
    return m_Realised_pnlIsSet;
}

void PositionInfo::unsetRealised_pnl()
{
    m_Realised_pnlIsSet = false;
}

double PositionInfo::getCumRealisedPnl() const
{
    return m_Cum_realised_pnl;
}


void PositionInfo::setCumRealisedPnl(double value)
{
    m_Cum_realised_pnl = value;
    m_Cum_realised_pnlIsSet = true;
}
bool PositionInfo::cumRealisedPnlIsSet() const
{
    return m_Cum_realised_pnlIsSet;
}

void PositionInfo::unsetCum_realised_pnl()
{
    m_Cum_realised_pnlIsSet = false;
}

double PositionInfo::getCumCommission() const
{
    return m_Cum_commission;
}


void PositionInfo::setCumCommission(double value)
{
    m_Cum_commission = value;
    m_Cum_commissionIsSet = true;
}
bool PositionInfo::cumCommissionIsSet() const
{
    return m_Cum_commissionIsSet;
}

void PositionInfo::unsetCum_commission()
{
    m_Cum_commissionIsSet = false;
}

double PositionInfo::getCrossSeq() const
{
    return m_Cross_seq;
}


void PositionInfo::setCrossSeq(double value)
{
    m_Cross_seq = value;
    m_Cross_seqIsSet = true;
}
bool PositionInfo::crossSeqIsSet() const
{
    return m_Cross_seqIsSet;
}

void PositionInfo::unsetCross_seq()
{
    m_Cross_seqIsSet = false;
}

double PositionInfo::getPositionSeq() const
{
    return m_Position_seq;
}


void PositionInfo::setPositionSeq(double value)
{
    m_Position_seq = value;
    m_Position_seqIsSet = true;
}
bool PositionInfo::positionSeqIsSet() const
{
    return m_Position_seqIsSet;
}

void PositionInfo::unsetPosition_seq()
{
    m_Position_seqIsSet = false;
}

utility::string_t PositionInfo::getCreatedAt() const
{
    return m_Created_at;
}


void PositionInfo::setCreatedAt(utility::string_t value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}
bool PositionInfo::createdAtIsSet() const
{
    return m_Created_atIsSet;
}

void PositionInfo::unsetCreated_at()
{
    m_Created_atIsSet = false;
}

utility::string_t PositionInfo::getUpdatedAt() const
{
    return m_Updated_at;
}


void PositionInfo::setUpdatedAt(utility::string_t value)
{
    m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool PositionInfo::updatedAtIsSet() const
{
    return m_Updated_atIsSet;
}

void PositionInfo::unsetUpdated_at()
{
    m_Updated_atIsSet = false;
}

}
}
}
}


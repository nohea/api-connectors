/*
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api-testnet.bybit.com]  
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


package io.swagger.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.math.BigDecimal;

/**
 * Get the trade records of a order response
 */
@ApiModel(description = "Get the trade records of a order response")
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2020-03-06T15:36:40.091+08:00")
public class TradeRecordsInfo {
  @SerializedName("closed_size")
  private BigDecimal closedSize = null;

  @SerializedName("cross_seq")
  private BigDecimal crossSeq = null;

  @SerializedName("exec_fee")
  private String execFee = null;

  @SerializedName("exec_id")
  private String execId = null;

  @SerializedName("exec_price")
  private String execPrice = null;

  @SerializedName("exec_qty")
  private BigDecimal execQty = null;

  @SerializedName("exec_time")
  private String execTime = null;

  @SerializedName("exec_type")
  private String execType = null;

  @SerializedName("exec_value")
  private String execValue = null;

  @SerializedName("fee_rate")
  private String feeRate = null;

  @SerializedName("last_liquidity_ind")
  private String lastLiquidityInd = null;

  @SerializedName("leaves_qty")
  private BigDecimal leavesQty = null;

  @SerializedName("nth_fill")
  private BigDecimal nthFill = null;

  @SerializedName("order_id")
  private String orderId = null;

  @SerializedName("order_price")
  private String orderPrice = null;

  @SerializedName("order_qty")
  private BigDecimal orderQty = null;

  @SerializedName("order_type")
  private String orderType = null;

  @SerializedName("side")
  private String side = null;

  @SerializedName("symbol")
  private String symbol = null;

  @SerializedName("user_id")
  private BigDecimal userId = null;

  public TradeRecordsInfo closedSize(BigDecimal closedSize) {
    this.closedSize = closedSize;
    return this;
  }

   /**
   * Get closedSize
   * @return closedSize
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getClosedSize() {
    return closedSize;
  }

  public void setClosedSize(BigDecimal closedSize) {
    this.closedSize = closedSize;
  }

  public TradeRecordsInfo crossSeq(BigDecimal crossSeq) {
    this.crossSeq = crossSeq;
    return this;
  }

   /**
   * Get crossSeq
   * @return crossSeq
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getCrossSeq() {
    return crossSeq;
  }

  public void setCrossSeq(BigDecimal crossSeq) {
    this.crossSeq = crossSeq;
  }

  public TradeRecordsInfo execFee(String execFee) {
    this.execFee = execFee;
    return this;
  }

   /**
   * Get execFee
   * @return execFee
  **/
  @ApiModelProperty(value = "")
  public String getExecFee() {
    return execFee;
  }

  public void setExecFee(String execFee) {
    this.execFee = execFee;
  }

  public TradeRecordsInfo execId(String execId) {
    this.execId = execId;
    return this;
  }

   /**
   * Get execId
   * @return execId
  **/
  @ApiModelProperty(value = "")
  public String getExecId() {
    return execId;
  }

  public void setExecId(String execId) {
    this.execId = execId;
  }

  public TradeRecordsInfo execPrice(String execPrice) {
    this.execPrice = execPrice;
    return this;
  }

   /**
   * Get execPrice
   * @return execPrice
  **/
  @ApiModelProperty(value = "")
  public String getExecPrice() {
    return execPrice;
  }

  public void setExecPrice(String execPrice) {
    this.execPrice = execPrice;
  }

  public TradeRecordsInfo execQty(BigDecimal execQty) {
    this.execQty = execQty;
    return this;
  }

   /**
   * Get execQty
   * @return execQty
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getExecQty() {
    return execQty;
  }

  public void setExecQty(BigDecimal execQty) {
    this.execQty = execQty;
  }

  public TradeRecordsInfo execTime(String execTime) {
    this.execTime = execTime;
    return this;
  }

   /**
   * Get execTime
   * @return execTime
  **/
  @ApiModelProperty(value = "")
  public String getExecTime() {
    return execTime;
  }

  public void setExecTime(String execTime) {
    this.execTime = execTime;
  }

  public TradeRecordsInfo execType(String execType) {
    this.execType = execType;
    return this;
  }

   /**
   * Get execType
   * @return execType
  **/
  @ApiModelProperty(value = "")
  public String getExecType() {
    return execType;
  }

  public void setExecType(String execType) {
    this.execType = execType;
  }

  public TradeRecordsInfo execValue(String execValue) {
    this.execValue = execValue;
    return this;
  }

   /**
   * Get execValue
   * @return execValue
  **/
  @ApiModelProperty(value = "")
  public String getExecValue() {
    return execValue;
  }

  public void setExecValue(String execValue) {
    this.execValue = execValue;
  }

  public TradeRecordsInfo feeRate(String feeRate) {
    this.feeRate = feeRate;
    return this;
  }

   /**
   * Get feeRate
   * @return feeRate
  **/
  @ApiModelProperty(value = "")
  public String getFeeRate() {
    return feeRate;
  }

  public void setFeeRate(String feeRate) {
    this.feeRate = feeRate;
  }

  public TradeRecordsInfo lastLiquidityInd(String lastLiquidityInd) {
    this.lastLiquidityInd = lastLiquidityInd;
    return this;
  }

   /**
   * Get lastLiquidityInd
   * @return lastLiquidityInd
  **/
  @ApiModelProperty(value = "")
  public String getLastLiquidityInd() {
    return lastLiquidityInd;
  }

  public void setLastLiquidityInd(String lastLiquidityInd) {
    this.lastLiquidityInd = lastLiquidityInd;
  }

  public TradeRecordsInfo leavesQty(BigDecimal leavesQty) {
    this.leavesQty = leavesQty;
    return this;
  }

   /**
   * Get leavesQty
   * @return leavesQty
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getLeavesQty() {
    return leavesQty;
  }

  public void setLeavesQty(BigDecimal leavesQty) {
    this.leavesQty = leavesQty;
  }

  public TradeRecordsInfo nthFill(BigDecimal nthFill) {
    this.nthFill = nthFill;
    return this;
  }

   /**
   * Get nthFill
   * @return nthFill
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getNthFill() {
    return nthFill;
  }

  public void setNthFill(BigDecimal nthFill) {
    this.nthFill = nthFill;
  }

  public TradeRecordsInfo orderId(String orderId) {
    this.orderId = orderId;
    return this;
  }

   /**
   * Get orderId
   * @return orderId
  **/
  @ApiModelProperty(value = "")
  public String getOrderId() {
    return orderId;
  }

  public void setOrderId(String orderId) {
    this.orderId = orderId;
  }

  public TradeRecordsInfo orderPrice(String orderPrice) {
    this.orderPrice = orderPrice;
    return this;
  }

   /**
   * Get orderPrice
   * @return orderPrice
  **/
  @ApiModelProperty(value = "")
  public String getOrderPrice() {
    return orderPrice;
  }

  public void setOrderPrice(String orderPrice) {
    this.orderPrice = orderPrice;
  }

  public TradeRecordsInfo orderQty(BigDecimal orderQty) {
    this.orderQty = orderQty;
    return this;
  }

   /**
   * Get orderQty
   * @return orderQty
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getOrderQty() {
    return orderQty;
  }

  public void setOrderQty(BigDecimal orderQty) {
    this.orderQty = orderQty;
  }

  public TradeRecordsInfo orderType(String orderType) {
    this.orderType = orderType;
    return this;
  }

   /**
   * Get orderType
   * @return orderType
  **/
  @ApiModelProperty(value = "")
  public String getOrderType() {
    return orderType;
  }

  public void setOrderType(String orderType) {
    this.orderType = orderType;
  }

  public TradeRecordsInfo side(String side) {
    this.side = side;
    return this;
  }

   /**
   * Get side
   * @return side
  **/
  @ApiModelProperty(value = "")
  public String getSide() {
    return side;
  }

  public void setSide(String side) {
    this.side = side;
  }

  public TradeRecordsInfo symbol(String symbol) {
    this.symbol = symbol;
    return this;
  }

   /**
   * Get symbol
   * @return symbol
  **/
  @ApiModelProperty(value = "")
  public String getSymbol() {
    return symbol;
  }

  public void setSymbol(String symbol) {
    this.symbol = symbol;
  }

  public TradeRecordsInfo userId(BigDecimal userId) {
    this.userId = userId;
    return this;
  }

   /**
   * Get userId
   * @return userId
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getUserId() {
    return userId;
  }

  public void setUserId(BigDecimal userId) {
    this.userId = userId;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TradeRecordsInfo tradeRecordsInfo = (TradeRecordsInfo) o;
    return Objects.equals(this.closedSize, tradeRecordsInfo.closedSize) &&
        Objects.equals(this.crossSeq, tradeRecordsInfo.crossSeq) &&
        Objects.equals(this.execFee, tradeRecordsInfo.execFee) &&
        Objects.equals(this.execId, tradeRecordsInfo.execId) &&
        Objects.equals(this.execPrice, tradeRecordsInfo.execPrice) &&
        Objects.equals(this.execQty, tradeRecordsInfo.execQty) &&
        Objects.equals(this.execTime, tradeRecordsInfo.execTime) &&
        Objects.equals(this.execType, tradeRecordsInfo.execType) &&
        Objects.equals(this.execValue, tradeRecordsInfo.execValue) &&
        Objects.equals(this.feeRate, tradeRecordsInfo.feeRate) &&
        Objects.equals(this.lastLiquidityInd, tradeRecordsInfo.lastLiquidityInd) &&
        Objects.equals(this.leavesQty, tradeRecordsInfo.leavesQty) &&
        Objects.equals(this.nthFill, tradeRecordsInfo.nthFill) &&
        Objects.equals(this.orderId, tradeRecordsInfo.orderId) &&
        Objects.equals(this.orderPrice, tradeRecordsInfo.orderPrice) &&
        Objects.equals(this.orderQty, tradeRecordsInfo.orderQty) &&
        Objects.equals(this.orderType, tradeRecordsInfo.orderType) &&
        Objects.equals(this.side, tradeRecordsInfo.side) &&
        Objects.equals(this.symbol, tradeRecordsInfo.symbol) &&
        Objects.equals(this.userId, tradeRecordsInfo.userId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(closedSize, crossSeq, execFee, execId, execPrice, execQty, execTime, execType, execValue, feeRate, lastLiquidityInd, leavesQty, nthFill, orderId, orderPrice, orderQty, orderType, side, symbol, userId);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TradeRecordsInfo {\n");
    
    sb.append("    closedSize: ").append(toIndentedString(closedSize)).append("\n");
    sb.append("    crossSeq: ").append(toIndentedString(crossSeq)).append("\n");
    sb.append("    execFee: ").append(toIndentedString(execFee)).append("\n");
    sb.append("    execId: ").append(toIndentedString(execId)).append("\n");
    sb.append("    execPrice: ").append(toIndentedString(execPrice)).append("\n");
    sb.append("    execQty: ").append(toIndentedString(execQty)).append("\n");
    sb.append("    execTime: ").append(toIndentedString(execTime)).append("\n");
    sb.append("    execType: ").append(toIndentedString(execType)).append("\n");
    sb.append("    execValue: ").append(toIndentedString(execValue)).append("\n");
    sb.append("    feeRate: ").append(toIndentedString(feeRate)).append("\n");
    sb.append("    lastLiquidityInd: ").append(toIndentedString(lastLiquidityInd)).append("\n");
    sb.append("    leavesQty: ").append(toIndentedString(leavesQty)).append("\n");
    sb.append("    nthFill: ").append(toIndentedString(nthFill)).append("\n");
    sb.append("    orderId: ").append(toIndentedString(orderId)).append("\n");
    sb.append("    orderPrice: ").append(toIndentedString(orderPrice)).append("\n");
    sb.append("    orderQty: ").append(toIndentedString(orderQty)).append("\n");
    sb.append("    orderType: ").append(toIndentedString(orderType)).append("\n");
    sb.append("    side: ").append(toIndentedString(side)).append("\n");
    sb.append("    symbol: ").append(toIndentedString(symbol)).append("\n");
    sb.append("    userId: ").append(toIndentedString(userId)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}


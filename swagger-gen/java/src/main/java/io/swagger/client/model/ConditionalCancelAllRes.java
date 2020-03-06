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
 * Cancel all conditional order response
 */
@ApiModel(description = "Cancel all conditional order response")
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2020-03-06T15:36:40.091+08:00")
public class ConditionalCancelAllRes {
  @SerializedName("clOrdID")
  private String clOrdID = null;

  @SerializedName("user_id")
  private BigDecimal userId = null;

  @SerializedName("symbol")
  private String symbol = null;

  @SerializedName("side")
  private String side = null;

  @SerializedName("order_type")
  private String orderType = null;

  @SerializedName("price")
  private String price = null;

  @SerializedName("qty")
  private BigDecimal qty = null;

  @SerializedName("time_in_force")
  private String timeInForce = null;

  @SerializedName("create_type")
  private String createType = null;

  @SerializedName("cancel_type")
  private String cancelType = null;

  @SerializedName("order_status")
  private String orderStatus = null;

  @SerializedName("leaves_qty")
  private BigDecimal leavesQty = null;

  @SerializedName("leaves_value")
  private String leavesValue = null;

  @SerializedName("cross_seq")
  private BigDecimal crossSeq = null;

  @SerializedName("stop_order_type")
  private String stopOrderType = null;

  @SerializedName("trigger_by")
  private String triggerBy = null;

  @SerializedName("created_at")
  private String createdAt = null;

  @SerializedName("updated_at")
  private String updatedAt = null;

  public ConditionalCancelAllRes clOrdID(String clOrdID) {
    this.clOrdID = clOrdID;
    return this;
  }

   /**
   * Get clOrdID
   * @return clOrdID
  **/
  @ApiModelProperty(value = "")
  public String getClOrdID() {
    return clOrdID;
  }

  public void setClOrdID(String clOrdID) {
    this.clOrdID = clOrdID;
  }

  public ConditionalCancelAllRes userId(BigDecimal userId) {
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

  public ConditionalCancelAllRes symbol(String symbol) {
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

  public ConditionalCancelAllRes side(String side) {
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

  public ConditionalCancelAllRes orderType(String orderType) {
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

  public ConditionalCancelAllRes price(String price) {
    this.price = price;
    return this;
  }

   /**
   * Get price
   * @return price
  **/
  @ApiModelProperty(value = "")
  public String getPrice() {
    return price;
  }

  public void setPrice(String price) {
    this.price = price;
  }

  public ConditionalCancelAllRes qty(BigDecimal qty) {
    this.qty = qty;
    return this;
  }

   /**
   * Get qty
   * @return qty
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getQty() {
    return qty;
  }

  public void setQty(BigDecimal qty) {
    this.qty = qty;
  }

  public ConditionalCancelAllRes timeInForce(String timeInForce) {
    this.timeInForce = timeInForce;
    return this;
  }

   /**
   * Get timeInForce
   * @return timeInForce
  **/
  @ApiModelProperty(value = "")
  public String getTimeInForce() {
    return timeInForce;
  }

  public void setTimeInForce(String timeInForce) {
    this.timeInForce = timeInForce;
  }

  public ConditionalCancelAllRes createType(String createType) {
    this.createType = createType;
    return this;
  }

   /**
   * Get createType
   * @return createType
  **/
  @ApiModelProperty(value = "")
  public String getCreateType() {
    return createType;
  }

  public void setCreateType(String createType) {
    this.createType = createType;
  }

  public ConditionalCancelAllRes cancelType(String cancelType) {
    this.cancelType = cancelType;
    return this;
  }

   /**
   * Get cancelType
   * @return cancelType
  **/
  @ApiModelProperty(value = "")
  public String getCancelType() {
    return cancelType;
  }

  public void setCancelType(String cancelType) {
    this.cancelType = cancelType;
  }

  public ConditionalCancelAllRes orderStatus(String orderStatus) {
    this.orderStatus = orderStatus;
    return this;
  }

   /**
   * Get orderStatus
   * @return orderStatus
  **/
  @ApiModelProperty(value = "")
  public String getOrderStatus() {
    return orderStatus;
  }

  public void setOrderStatus(String orderStatus) {
    this.orderStatus = orderStatus;
  }

  public ConditionalCancelAllRes leavesQty(BigDecimal leavesQty) {
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

  public ConditionalCancelAllRes leavesValue(String leavesValue) {
    this.leavesValue = leavesValue;
    return this;
  }

   /**
   * Get leavesValue
   * @return leavesValue
  **/
  @ApiModelProperty(value = "")
  public String getLeavesValue() {
    return leavesValue;
  }

  public void setLeavesValue(String leavesValue) {
    this.leavesValue = leavesValue;
  }

  public ConditionalCancelAllRes crossSeq(BigDecimal crossSeq) {
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

  public ConditionalCancelAllRes stopOrderType(String stopOrderType) {
    this.stopOrderType = stopOrderType;
    return this;
  }

   /**
   * Get stopOrderType
   * @return stopOrderType
  **/
  @ApiModelProperty(value = "")
  public String getStopOrderType() {
    return stopOrderType;
  }

  public void setStopOrderType(String stopOrderType) {
    this.stopOrderType = stopOrderType;
  }

  public ConditionalCancelAllRes triggerBy(String triggerBy) {
    this.triggerBy = triggerBy;
    return this;
  }

   /**
   * Get triggerBy
   * @return triggerBy
  **/
  @ApiModelProperty(value = "")
  public String getTriggerBy() {
    return triggerBy;
  }

  public void setTriggerBy(String triggerBy) {
    this.triggerBy = triggerBy;
  }

  public ConditionalCancelAllRes createdAt(String createdAt) {
    this.createdAt = createdAt;
    return this;
  }

   /**
   * Get createdAt
   * @return createdAt
  **/
  @ApiModelProperty(value = "")
  public String getCreatedAt() {
    return createdAt;
  }

  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }

  public ConditionalCancelAllRes updatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
    return this;
  }

   /**
   * Get updatedAt
   * @return updatedAt
  **/
  @ApiModelProperty(value = "")
  public String getUpdatedAt() {
    return updatedAt;
  }

  public void setUpdatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ConditionalCancelAllRes conditionalCancelAllRes = (ConditionalCancelAllRes) o;
    return Objects.equals(this.clOrdID, conditionalCancelAllRes.clOrdID) &&
        Objects.equals(this.userId, conditionalCancelAllRes.userId) &&
        Objects.equals(this.symbol, conditionalCancelAllRes.symbol) &&
        Objects.equals(this.side, conditionalCancelAllRes.side) &&
        Objects.equals(this.orderType, conditionalCancelAllRes.orderType) &&
        Objects.equals(this.price, conditionalCancelAllRes.price) &&
        Objects.equals(this.qty, conditionalCancelAllRes.qty) &&
        Objects.equals(this.timeInForce, conditionalCancelAllRes.timeInForce) &&
        Objects.equals(this.createType, conditionalCancelAllRes.createType) &&
        Objects.equals(this.cancelType, conditionalCancelAllRes.cancelType) &&
        Objects.equals(this.orderStatus, conditionalCancelAllRes.orderStatus) &&
        Objects.equals(this.leavesQty, conditionalCancelAllRes.leavesQty) &&
        Objects.equals(this.leavesValue, conditionalCancelAllRes.leavesValue) &&
        Objects.equals(this.crossSeq, conditionalCancelAllRes.crossSeq) &&
        Objects.equals(this.stopOrderType, conditionalCancelAllRes.stopOrderType) &&
        Objects.equals(this.triggerBy, conditionalCancelAllRes.triggerBy) &&
        Objects.equals(this.createdAt, conditionalCancelAllRes.createdAt) &&
        Objects.equals(this.updatedAt, conditionalCancelAllRes.updatedAt);
  }

  @Override
  public int hashCode() {
    return Objects.hash(clOrdID, userId, symbol, side, orderType, price, qty, timeInForce, createType, cancelType, orderStatus, leavesQty, leavesValue, crossSeq, stopOrderType, triggerBy, createdAt, updatedAt);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ConditionalCancelAllRes {\n");
    
    sb.append("    clOrdID: ").append(toIndentedString(clOrdID)).append("\n");
    sb.append("    userId: ").append(toIndentedString(userId)).append("\n");
    sb.append("    symbol: ").append(toIndentedString(symbol)).append("\n");
    sb.append("    side: ").append(toIndentedString(side)).append("\n");
    sb.append("    orderType: ").append(toIndentedString(orderType)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    qty: ").append(toIndentedString(qty)).append("\n");
    sb.append("    timeInForce: ").append(toIndentedString(timeInForce)).append("\n");
    sb.append("    createType: ").append(toIndentedString(createType)).append("\n");
    sb.append("    cancelType: ").append(toIndentedString(cancelType)).append("\n");
    sb.append("    orderStatus: ").append(toIndentedString(orderStatus)).append("\n");
    sb.append("    leavesQty: ").append(toIndentedString(leavesQty)).append("\n");
    sb.append("    leavesValue: ").append(toIndentedString(leavesValue)).append("\n");
    sb.append("    crossSeq: ").append(toIndentedString(crossSeq)).append("\n");
    sb.append("    stopOrderType: ").append(toIndentedString(stopOrderType)).append("\n");
    sb.append("    triggerBy: ").append(toIndentedString(triggerBy)).append("\n");
    sb.append("    createdAt: ").append(toIndentedString(createdAt)).append("\n");
    sb.append("    updatedAt: ").append(toIndentedString(updatedAt)).append("\n");
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


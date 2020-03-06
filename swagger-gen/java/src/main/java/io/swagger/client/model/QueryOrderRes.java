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
 * Query real-time active order information response
 */
@ApiModel(description = "Query real-time active order information response")
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2020-03-06T15:36:40.091+08:00")
public class QueryOrderRes {
  @SerializedName("order_id")
  private String orderId = null;

  @SerializedName("user_id")
  private BigDecimal userId = null;

  @SerializedName("symbol")
  private String symbol = null;

  @SerializedName("side")
  private String side = null;

  @SerializedName("order_type")
  private String orderType = null;

  @SerializedName("price")
  private Double price = null;

  @SerializedName("qty")
  private String qty = null;

  @SerializedName("time_in_force")
  private String timeInForce = null;

  @SerializedName("order_status")
  private String orderStatus = null;

  @SerializedName("ext_fields")
  private Object extFields = null;

  @SerializedName("leaves_qty")
  private BigDecimal leavesQty = null;

  @SerializedName("leaves_value")
  private BigDecimal leavesValue = null;

  @SerializedName("cum_exec_qty")
  private BigDecimal cumExecQty = null;

  @SerializedName("reject_reason")
  private String rejectReason = null;

  @SerializedName("order_link_id")
  private String orderLinkId = null;

  @SerializedName("created_at")
  private String createdAt = null;

  @SerializedName("updated_at")
  private String updatedAt = null;

  public QueryOrderRes orderId(String orderId) {
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

  public QueryOrderRes userId(BigDecimal userId) {
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

  public QueryOrderRes symbol(String symbol) {
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

  public QueryOrderRes side(String side) {
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

  public QueryOrderRes orderType(String orderType) {
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

  public QueryOrderRes price(Double price) {
    this.price = price;
    return this;
  }

   /**
   * Get price
   * @return price
  **/
  @ApiModelProperty(value = "")
  public Double getPrice() {
    return price;
  }

  public void setPrice(Double price) {
    this.price = price;
  }

  public QueryOrderRes qty(String qty) {
    this.qty = qty;
    return this;
  }

   /**
   * Get qty
   * @return qty
  **/
  @ApiModelProperty(value = "")
  public String getQty() {
    return qty;
  }

  public void setQty(String qty) {
    this.qty = qty;
  }

  public QueryOrderRes timeInForce(String timeInForce) {
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

  public QueryOrderRes orderStatus(String orderStatus) {
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

  public QueryOrderRes extFields(Object extFields) {
    this.extFields = extFields;
    return this;
  }

   /**
   * Get extFields
   * @return extFields
  **/
  @ApiModelProperty(value = "")
  public Object getExtFields() {
    return extFields;
  }

  public void setExtFields(Object extFields) {
    this.extFields = extFields;
  }

  public QueryOrderRes leavesQty(BigDecimal leavesQty) {
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

  public QueryOrderRes leavesValue(BigDecimal leavesValue) {
    this.leavesValue = leavesValue;
    return this;
  }

   /**
   * Get leavesValue
   * @return leavesValue
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getLeavesValue() {
    return leavesValue;
  }

  public void setLeavesValue(BigDecimal leavesValue) {
    this.leavesValue = leavesValue;
  }

  public QueryOrderRes cumExecQty(BigDecimal cumExecQty) {
    this.cumExecQty = cumExecQty;
    return this;
  }

   /**
   * Get cumExecQty
   * @return cumExecQty
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getCumExecQty() {
    return cumExecQty;
  }

  public void setCumExecQty(BigDecimal cumExecQty) {
    this.cumExecQty = cumExecQty;
  }

  public QueryOrderRes rejectReason(String rejectReason) {
    this.rejectReason = rejectReason;
    return this;
  }

   /**
   * Get rejectReason
   * @return rejectReason
  **/
  @ApiModelProperty(value = "")
  public String getRejectReason() {
    return rejectReason;
  }

  public void setRejectReason(String rejectReason) {
    this.rejectReason = rejectReason;
  }

  public QueryOrderRes orderLinkId(String orderLinkId) {
    this.orderLinkId = orderLinkId;
    return this;
  }

   /**
   * Get orderLinkId
   * @return orderLinkId
  **/
  @ApiModelProperty(value = "")
  public String getOrderLinkId() {
    return orderLinkId;
  }

  public void setOrderLinkId(String orderLinkId) {
    this.orderLinkId = orderLinkId;
  }

  public QueryOrderRes createdAt(String createdAt) {
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

  public QueryOrderRes updatedAt(String updatedAt) {
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
    QueryOrderRes queryOrderRes = (QueryOrderRes) o;
    return Objects.equals(this.orderId, queryOrderRes.orderId) &&
        Objects.equals(this.userId, queryOrderRes.userId) &&
        Objects.equals(this.symbol, queryOrderRes.symbol) &&
        Objects.equals(this.side, queryOrderRes.side) &&
        Objects.equals(this.orderType, queryOrderRes.orderType) &&
        Objects.equals(this.price, queryOrderRes.price) &&
        Objects.equals(this.qty, queryOrderRes.qty) &&
        Objects.equals(this.timeInForce, queryOrderRes.timeInForce) &&
        Objects.equals(this.orderStatus, queryOrderRes.orderStatus) &&
        Objects.equals(this.extFields, queryOrderRes.extFields) &&
        Objects.equals(this.leavesQty, queryOrderRes.leavesQty) &&
        Objects.equals(this.leavesValue, queryOrderRes.leavesValue) &&
        Objects.equals(this.cumExecQty, queryOrderRes.cumExecQty) &&
        Objects.equals(this.rejectReason, queryOrderRes.rejectReason) &&
        Objects.equals(this.orderLinkId, queryOrderRes.orderLinkId) &&
        Objects.equals(this.createdAt, queryOrderRes.createdAt) &&
        Objects.equals(this.updatedAt, queryOrderRes.updatedAt);
  }

  @Override
  public int hashCode() {
    return Objects.hash(orderId, userId, symbol, side, orderType, price, qty, timeInForce, orderStatus, extFields, leavesQty, leavesValue, cumExecQty, rejectReason, orderLinkId, createdAt, updatedAt);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QueryOrderRes {\n");
    
    sb.append("    orderId: ").append(toIndentedString(orderId)).append("\n");
    sb.append("    userId: ").append(toIndentedString(userId)).append("\n");
    sb.append("    symbol: ").append(toIndentedString(symbol)).append("\n");
    sb.append("    side: ").append(toIndentedString(side)).append("\n");
    sb.append("    orderType: ").append(toIndentedString(orderType)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    qty: ").append(toIndentedString(qty)).append("\n");
    sb.append("    timeInForce: ").append(toIndentedString(timeInForce)).append("\n");
    sb.append("    orderStatus: ").append(toIndentedString(orderStatus)).append("\n");
    sb.append("    extFields: ").append(toIndentedString(extFields)).append("\n");
    sb.append("    leavesQty: ").append(toIndentedString(leavesQty)).append("\n");
    sb.append("    leavesValue: ").append(toIndentedString(leavesValue)).append("\n");
    sb.append("    cumExecQty: ").append(toIndentedString(cumExecQty)).append("\n");
    sb.append("    rejectReason: ").append(toIndentedString(rejectReason)).append("\n");
    sb.append("    orderLinkId: ").append(toIndentedString(orderLinkId)).append("\n");
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


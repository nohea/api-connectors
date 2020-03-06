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
 * Cancel all active orders response
 */
@ApiModel(description = "Cancel all active orders response")
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2020-03-06T15:36:40.091+08:00")
public class OrderCancelAllRes {
  @SerializedName("clOrdID")
  private String clOrdID = null;

  @SerializedName("user_id")
  private BigDecimal userId = null;

  @SerializedName("side")
  private String side = null;

  @SerializedName("order_type")
  private String orderType = null;

  @SerializedName("price")
  private String price = null;

  @SerializedName("qty")
  private String qty = null;

  @SerializedName("time_in_force")
  private String timeInForce = null;

  @SerializedName("create_type")
  private String createType = null;

  @SerializedName("order_status")
  private String orderStatus = null;

  @SerializedName("leaves_qty")
  private BigDecimal leavesQty = null;

  @SerializedName("leaves_value")
  private BigDecimal leavesValue = null;

  @SerializedName("created_at")
  private String createdAt = null;

  @SerializedName("updated_at")
  private String updatedAt = null;

  @SerializedName("cross_status")
  private String crossStatus = null;

  @SerializedName("cross_seq")
  private BigDecimal crossSeq = null;

  public OrderCancelAllRes clOrdID(String clOrdID) {
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

  public OrderCancelAllRes userId(BigDecimal userId) {
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

  public OrderCancelAllRes side(String side) {
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

  public OrderCancelAllRes orderType(String orderType) {
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

  public OrderCancelAllRes price(String price) {
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

  public OrderCancelAllRes qty(String qty) {
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

  public OrderCancelAllRes timeInForce(String timeInForce) {
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

  public OrderCancelAllRes createType(String createType) {
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

  public OrderCancelAllRes orderStatus(String orderStatus) {
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

  public OrderCancelAllRes leavesQty(BigDecimal leavesQty) {
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

  public OrderCancelAllRes leavesValue(BigDecimal leavesValue) {
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

  public OrderCancelAllRes createdAt(String createdAt) {
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

  public OrderCancelAllRes updatedAt(String updatedAt) {
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

  public OrderCancelAllRes crossStatus(String crossStatus) {
    this.crossStatus = crossStatus;
    return this;
  }

   /**
   * Get crossStatus
   * @return crossStatus
  **/
  @ApiModelProperty(value = "")
  public String getCrossStatus() {
    return crossStatus;
  }

  public void setCrossStatus(String crossStatus) {
    this.crossStatus = crossStatus;
  }

  public OrderCancelAllRes crossSeq(BigDecimal crossSeq) {
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrderCancelAllRes orderCancelAllRes = (OrderCancelAllRes) o;
    return Objects.equals(this.clOrdID, orderCancelAllRes.clOrdID) &&
        Objects.equals(this.userId, orderCancelAllRes.userId) &&
        Objects.equals(this.side, orderCancelAllRes.side) &&
        Objects.equals(this.orderType, orderCancelAllRes.orderType) &&
        Objects.equals(this.price, orderCancelAllRes.price) &&
        Objects.equals(this.qty, orderCancelAllRes.qty) &&
        Objects.equals(this.timeInForce, orderCancelAllRes.timeInForce) &&
        Objects.equals(this.createType, orderCancelAllRes.createType) &&
        Objects.equals(this.orderStatus, orderCancelAllRes.orderStatus) &&
        Objects.equals(this.leavesQty, orderCancelAllRes.leavesQty) &&
        Objects.equals(this.leavesValue, orderCancelAllRes.leavesValue) &&
        Objects.equals(this.createdAt, orderCancelAllRes.createdAt) &&
        Objects.equals(this.updatedAt, orderCancelAllRes.updatedAt) &&
        Objects.equals(this.crossStatus, orderCancelAllRes.crossStatus) &&
        Objects.equals(this.crossSeq, orderCancelAllRes.crossSeq);
  }

  @Override
  public int hashCode() {
    return Objects.hash(clOrdID, userId, side, orderType, price, qty, timeInForce, createType, orderStatus, leavesQty, leavesValue, createdAt, updatedAt, crossStatus, crossSeq);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrderCancelAllRes {\n");
    
    sb.append("    clOrdID: ").append(toIndentedString(clOrdID)).append("\n");
    sb.append("    userId: ").append(toIndentedString(userId)).append("\n");
    sb.append("    side: ").append(toIndentedString(side)).append("\n");
    sb.append("    orderType: ").append(toIndentedString(orderType)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    qty: ").append(toIndentedString(qty)).append("\n");
    sb.append("    timeInForce: ").append(toIndentedString(timeInForce)).append("\n");
    sb.append("    createType: ").append(toIndentedString(createType)).append("\n");
    sb.append("    orderStatus: ").append(toIndentedString(orderStatus)).append("\n");
    sb.append("    leavesQty: ").append(toIndentedString(leavesQty)).append("\n");
    sb.append("    leavesValue: ").append(toIndentedString(leavesValue)).append("\n");
    sb.append("    createdAt: ").append(toIndentedString(createdAt)).append("\n");
    sb.append("    updatedAt: ").append(toIndentedString(updatedAt)).append("\n");
    sb.append("    crossStatus: ").append(toIndentedString(crossStatus)).append("\n");
    sb.append("    crossSeq: ").append(toIndentedString(crossSeq)).append("\n");
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


# coding: utf-8

"""
    Bybit API

    ## REST API for the Bybit Exchange. Base URI: [https://api-testnet.bybit.com]    # noqa: E501

    OpenAPI spec version: 1.0.0
    Contact: support@bybit.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six


class LinearRecentTradingRecordResp(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'id': 'str',
        'price': 'float',
        'qty': 'float',
        'side': 'str',
        'symbol': 'str',
        'time': 'str',
        'trade_time_ms': 'int'
    }

    attribute_map = {
        'id': 'id',
        'price': 'price',
        'qty': 'qty',
        'side': 'side',
        'symbol': 'symbol',
        'time': 'time',
        'trade_time_ms': 'trade_time_ms'
    }

    def __init__(self, id=None, price=None, qty=None, side=None, symbol=None, time=None, trade_time_ms=None):  # noqa: E501
        """LinearRecentTradingRecordResp - a model defined in Swagger"""  # noqa: E501

        self._id = None
        self._price = None
        self._qty = None
        self._side = None
        self._symbol = None
        self._time = None
        self._trade_time_ms = None
        self.discriminator = None

        if id is not None:
            self.id = id
        if price is not None:
            self.price = price
        if qty is not None:
            self.qty = qty
        if side is not None:
            self.side = side
        if symbol is not None:
            self.symbol = symbol
        if time is not None:
            self.time = time
        if trade_time_ms is not None:
            self.trade_time_ms = trade_time_ms

    @property
    def id(self):
        """Gets the id of this LinearRecentTradingRecordResp.  # noqa: E501


        :return: The id of this LinearRecentTradingRecordResp.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this LinearRecentTradingRecordResp.


        :param id: The id of this LinearRecentTradingRecordResp.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def price(self):
        """Gets the price of this LinearRecentTradingRecordResp.  # noqa: E501


        :return: The price of this LinearRecentTradingRecordResp.  # noqa: E501
        :rtype: float
        """
        return self._price

    @price.setter
    def price(self, price):
        """Sets the price of this LinearRecentTradingRecordResp.


        :param price: The price of this LinearRecentTradingRecordResp.  # noqa: E501
        :type: float
        """

        self._price = price

    @property
    def qty(self):
        """Gets the qty of this LinearRecentTradingRecordResp.  # noqa: E501


        :return: The qty of this LinearRecentTradingRecordResp.  # noqa: E501
        :rtype: float
        """
        return self._qty

    @qty.setter
    def qty(self, qty):
        """Sets the qty of this LinearRecentTradingRecordResp.


        :param qty: The qty of this LinearRecentTradingRecordResp.  # noqa: E501
        :type: float
        """

        self._qty = qty

    @property
    def side(self):
        """Gets the side of this LinearRecentTradingRecordResp.  # noqa: E501


        :return: The side of this LinearRecentTradingRecordResp.  # noqa: E501
        :rtype: str
        """
        return self._side

    @side.setter
    def side(self, side):
        """Sets the side of this LinearRecentTradingRecordResp.


        :param side: The side of this LinearRecentTradingRecordResp.  # noqa: E501
        :type: str
        """

        self._side = side

    @property
    def symbol(self):
        """Gets the symbol of this LinearRecentTradingRecordResp.  # noqa: E501


        :return: The symbol of this LinearRecentTradingRecordResp.  # noqa: E501
        :rtype: str
        """
        return self._symbol

    @symbol.setter
    def symbol(self, symbol):
        """Sets the symbol of this LinearRecentTradingRecordResp.


        :param symbol: The symbol of this LinearRecentTradingRecordResp.  # noqa: E501
        :type: str
        """

        self._symbol = symbol

    @property
    def time(self):
        """Gets the time of this LinearRecentTradingRecordResp.  # noqa: E501


        :return: The time of this LinearRecentTradingRecordResp.  # noqa: E501
        :rtype: str
        """
        return self._time

    @time.setter
    def time(self, time):
        """Sets the time of this LinearRecentTradingRecordResp.


        :param time: The time of this LinearRecentTradingRecordResp.  # noqa: E501
        :type: str
        """

        self._time = time

    @property
    def trade_time_ms(self):
        """Gets the trade_time_ms of this LinearRecentTradingRecordResp.  # noqa: E501


        :return: The trade_time_ms of this LinearRecentTradingRecordResp.  # noqa: E501
        :rtype: int
        """
        return self._trade_time_ms

    @trade_time_ms.setter
    def trade_time_ms(self, trade_time_ms):
        """Sets the trade_time_ms of this LinearRecentTradingRecordResp.


        :param trade_time_ms: The trade_time_ms of this LinearRecentTradingRecordResp.  # noqa: E501
        :type: int
        """

        self._trade_time_ms = trade_time_ms

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value
        if issubclass(LinearRecentTradingRecordResp, dict):
            for key, value in self.items():
                result[key] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, LinearRecentTradingRecordResp):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

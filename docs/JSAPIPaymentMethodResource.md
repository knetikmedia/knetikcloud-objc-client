# JSAPIPaymentMethodResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**createdDate** | **NSNumber*** | The date/time this resource was created in seconds since unix epoch | [optional] 
**_default** | **NSNumber*** |  | [optional] 
**disabled** | **NSNumber*** | Whether this payment method is disabled or not | [optional] 
**expirationDate** | **NSNumber*** | The expiration date for the payment method, expressed as seconds since epoch. Typically used for credit card payment methods | [optional] 
**expirationMonth** | **NSNumber*** | The expiration month (1 - 12) for the payment method. Typically used for credit card payment methods | [optional] 
**expirationYear** | **NSNumber*** | The expiration year for the payment method. Typically used for credit card payment methods | [optional] 
**_id** | **NSNumber*** | The unique ID of the resource | [optional] 
**last4** | **NSString*** | The last 4 digits of the account number for the payment method. Typically used for credit card payment methods | [optional] 
**name** | **NSString*** | The user friendly name of the resource | 
**paymentMethodType** | [**JSAPIPaymentMethodTypeResource***](JSAPIPaymentMethodTypeResource.md) | The type of payment method. Must be a pre-existing value | 
**paymentType** | **NSString*** | The generic payment type. Default is card | [optional] 
**sort** | **NSNumber*** | The sort value for the payment method | [optional] 
**token** | **NSString*** | The unique token for the payment method | [optional] 
**uniqueKey** | **NSString*** | An optional unique identifier | [optional] 
**updatedDate** | **NSNumber*** | The date/time this resource was last updated in seconds since unix epoch | [optional] 
**userId** | **NSNumber*** | The user&#39;s id. If null, indicates a shared payment method that any user can use (i.e., &#39;wallet&#39;) | [optional] 
**verified** | **NSNumber*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)



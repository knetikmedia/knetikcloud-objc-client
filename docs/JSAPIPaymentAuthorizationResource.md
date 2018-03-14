# JSAPIPaymentAuthorizationResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**captured** | **NSNumber*** | Whether this authorization has been captured | [optional] 
**created** | **NSNumber*** | The date this authorization was received, unix timestamp in seconds | [optional] 
**details** | **NSObject*** | The details for this authorization. Format dependent on payment provider | [optional] 
**_id** | **NSNumber*** | The id of the authorization | [optional] 
**invoice** | **NSNumber*** | The invoice this authorization is intended to pay | [optional] 
**paymentType** | [**JSAPISimpleReferenceResourceInt_***](JSAPISimpleReferenceResourceInt_.md) | The payment type (which provider) this payment is through | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)



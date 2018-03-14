# JSAPIFinalizeBillingAgreementRequest

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**invoiceId** | **NSNumber*** | The ID of the invoice being paid along with the creation of this agreement | [optional] 
**varNewDefault** | **NSNumber*** | Whether the new payment method created should be the user&#39;s default | [optional] 
**payerId** | **NSString*** | The payer ID from PayPal (passed as a parameter in the return URL). Only required if an invoice ID was included | [optional] 
**token** | **NSString*** | The token from PayPal (passed as a parameter in the return URL) | 
**userId** | **NSNumber*** | The ID of the user. Defaults to the logged in user | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)



# JSAPIPaymentMethodTypeResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_id** | **NSNumber*** | The id of the payment method type | 
**invoiceProcessingHours** | **NSNumber*** | The maximum timelimit in hours for an invoice in the processing status while waiting on this payment method type. Defaults to the global config invoice.processing_expiration_hours if null | [optional] 
**name** | **NSString*** | The name of the payment method type | 
**supportsCapture** | **NSNumber*** | Whether the payment handler supports the authorize and capture flow | [optional] 
**supportsPartial** | **NSNumber*** | Whether the payment handler supports paying for part of an invoice, rather than the full grand_total | [optional] 
**supportsRebill** | **NSNumber*** | Whether the payment handler supports rebilling the method later (for saved payments or subscriptions) | [optional] 
**supportsRefunds** | **NSNumber*** | Whether the payment handler supports refunding | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)



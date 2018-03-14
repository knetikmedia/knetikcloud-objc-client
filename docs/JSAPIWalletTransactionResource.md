# JSAPIWalletTransactionResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**balance** | **NSNumber*** | The new balance of the wallet after the transaction | [optional] 
**createDate** | **NSNumber*** | The unix timestamp in seconds of the transaction | [optional] 
**currencyCode** | **NSString*** | The code of the currency for the transaction | [optional] 
**details** | **NSString*** | The specific details of the transaction, such as a message from the admin that created it | [optional] 
**_id** | **NSNumber*** | The id of the transaction | [optional] 
**invoiceId** | **NSNumber*** | The id of the invoice that spawned the transaction, if any | [optional] 
**isRefunded** | **NSNumber*** | Whether the transaction has been refunded | [optional] 
**response** | **NSString*** | The response | [optional] 
**source** | **NSString*** | The root source of the transaction | [optional] 
**successful** | **NSNumber*** | If the transaction was successful | [optional] 
**transactionId** | **NSString*** | The payment gateway (external) transaction ID | [optional] 
**type** | **NSString*** | The general type of the transaction | [optional] 
**typeHint** | **NSString*** | The table name of the subclass | [optional] 
**user** | [**JSAPISimpleUserResource***](JSAPISimpleUserResource.md) | The owner of the wallet | [optional] 
**value** | **NSNumber*** | The amount of the transaction, positive if a gain, negative if an expenditure | [optional] 
**walletId** | **NSNumber*** | The id of the wallet this transaction affected | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)



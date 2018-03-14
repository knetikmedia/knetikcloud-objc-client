# JSAPICurrencyResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**active** | **NSNumber*** | Whether the currency is active. Default true | [optional] 
**code** | **NSString*** | The unique id code for the currency. Maximum 5 characters | 
**createdDate** | **NSNumber*** | The unix timestamp in seconds the currency was added to the system | [optional] 
**defaultCurrency** | **NSNumber*** | Whether this is the default currency. All real money wallets will be in this currency, and the &#39;factor&#39; on each currency is in relation to the default. There must be one default currency and the current will be changed if you set another as the default. Cannot be combined with virtual currency. Take extreme caution when changing | [optional] 
**factor** | **NSNumber*** | The decimal to multiply the default currency to localize to this one. Should be 1 for the default currency itself. | 
**icon** | **NSString*** | The url for an icon of the currency | [optional] 
**name** | **NSString*** | The name of the currency | 
**type** | **NSString*** | The type of currency. Default &#39;real&#39; | [optional] 
**updatedDate** | **NSNumber*** | The unix timestamp in seconds the currency was last updated in the system. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)



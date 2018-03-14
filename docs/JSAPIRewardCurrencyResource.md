# JSAPIRewardCurrencyResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**currencyCode** | **NSString*** | The code of the currency type to give | 
**currencyName** | **NSString*** | The name of the currency reward to give.  Set by currency_code) | [optional] 
**maxRank** | **NSNumber*** | The highest number (worst) rank to give the reward to. Must be greater than or equal to minRank | 
**minRank** | **NSNumber*** | The lowest number (best) rank to give the reward to. Must be greater than zero | 
**percent** | **NSNumber*** | True if the value is actually a percentage of the intake | 
**value** | **NSNumber*** | The amount of currency to give. For percentage values, 0.5 is 50% | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)



# JSAPITemplateSMSResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**from** | **NSString*** | The phone number to attribute the outgoing message to. Optional if the config text.out_number is set. | [optional] 
**recipients** | **NSArray&lt;NSNumber*&gt;*** | A list of user ids to send the message to. | 
**template** | **NSString*** | A mustache template | 
**templateVars** | **NSObject*** | A map of values to fill in the template | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)



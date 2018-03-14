# JSAPIBreTriggerResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**category** | **NSString*** | The category this trigger belongs to. See endpoints for related asset information. All new triggers are in category &#39;custom&#39; | [optional] 
**eventName** | **NSString*** | The unique name for the event. This serves as the unique identifier. Cannot be changed after creation | 
**parameters** | [**NSArray&lt;JSAPIBreTriggerParameterDefinition&gt;***](JSAPIBreTriggerParameterDefinition.md) | A list of parameters that will be sent with the event when the trigger is fired. These must be included in the event and match the described types | [optional] 
**systemTrigger** | **NSNumber*** | Where this trigger came from. System triggers cannot be removed or updated | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | A list of tags for filtering | [optional] 
**triggerDescription** | **NSString*** | A description of the trigger | 
**triggerName** | **NSString*** | A human readable name for this trigger | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)



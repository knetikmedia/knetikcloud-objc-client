# JSAPIBreRule

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**actions** | [**NSArray&lt;JSAPIActionContextObject_&gt;***](JSAPIActionContextObject_.md) | A list of actions to execute, and the mapping for their parameters, when the rule runs. Minimum 1 | 
**condition** | [**JSAPIPredicateResource***](JSAPIPredicateResource.md) | A condition expression that must be met in a given event for the rule to run. Null to always run. | [optional] 
**conditionText** | **NSString*** | The condition as a readable string. Filled in by the system from the condition | [optional] 
**_description** | **NSString*** | The human readable description of the rule | [optional] 
**enabled** | **NSNumber*** | Whether the rule is enabled to run (in conjunction with dates). Default true | [optional] 
**endDate** | **NSNumber*** | The date the rule ceases to take effect, or null if never. Unix timestamp in seconds | [optional] 
**evaluationCount** | **NSNumber*** | How many times the rule has been evaluated (it&#39;s conditions checked, whether it then runs or not) | [optional] 
**eventName** | **NSString*** | The event name of the trigger this rule runs for. Affects which parameters are available | 
**_id** | **NSString*** | The id of the rule for later references. If left null a random guid will be generated. Must be unique. Cannot be changed | [optional] 
**name** | **NSString*** | The human readable name of the rule | 
**runCount** | **NSNumber*** | How many times the rule has run | [optional] 
**sort** | **NSNumber*** | Used to sort rules to control the order they run in. Larger numbered sort values run first.  Default 500 | [optional] 
**startDate** | **NSNumber*** | The date the rule begins to take effect, or null if always. Unix timestamp in seconds | [optional] 
**systemRule** | **NSNumber*** | Whether the rule is a default part of the system. System rules cannot be edited or deleted, but may be disabled | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)



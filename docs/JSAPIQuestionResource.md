# JSAPIQuestionResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type | [optional] 
**answers** | [**NSArray&lt;JSAPIAnswerResource&gt;***](JSAPIAnswerResource.md) | The list of available answers | [optional] 
**category** | [**JSAPINestedCategory***](JSAPINestedCategory.md) | The category for the question | 
**createdDate** | **NSNumber*** | The date/time this resource was created in seconds since unix epoch | [optional] 
**difficulty** | **NSNumber*** | The difficulty of the question | 
**_id** | **NSString*** | The unique ID for that resource | [optional] 
**importId** | **NSNumber*** | The id of the import job that created the question, or null if not from an import | [optional] 
**publishedDate** | **NSNumber*** | When the question becomes available, null for never, in seconds since epoch | [optional] 
**question** | [**JSAPIProperty***](JSAPIProperty.md) | The question. Different &#39;type&#39; values indicate different structures as the question may be test, image, etc. See information on additional properties for the list and their structures | 
**source1** | **NSString*** | The first source of the question | [optional] 
**source2** | **NSString*** | The second source of the question | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | The list of tags | [optional] 
**template** | **NSString*** | A question template this question is validated against (private). May be null and no validation of additional_properties will be done | [optional] 
**updatedDate** | **NSNumber*** | The date/time this resource was last updated in seconds since unix epoch | [optional] 
**vendor** | **NSString*** | The supplier of the question | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)



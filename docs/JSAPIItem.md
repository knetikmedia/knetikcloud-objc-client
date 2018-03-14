# JSAPIItem

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type, or be an extra not from the template | [optional] 
**behaviors** | [**NSArray&lt;JSAPIBehavior&gt;***](JSAPIBehavior.md) | The behaviors linked to the item, describing various options and interactions. May not be included in item lists | [optional] 
**category** | **NSString*** | A category for filtering items | [optional] 
**createdDate** | **NSNumber*** | The date the item was created, unix timestamp in seconds | [optional] 
**_id** | **NSNumber*** | The id of the item | [optional] 
**longDescription** | **NSString*** | A long description of the item | [optional] 
**name** | **NSString*** | The name of the item | 
**shortDescription** | **NSString*** | A short description of the item, max 255 chars | [optional] 
**sort** | **NSNumber*** | A number to use in sorting items.  Default 500 | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | List of tags used for filtering items | [optional] 
**template** | **NSString*** | An item template this item is validated against.  May be null and no validation of additional_properties will be done.  Default &#x3D; null | [optional] 
**typeHint** | **NSString*** | The type of the item | 
**uniqueKey** | **NSString*** | The unique key for the item | [optional] 
**updatedDate** | **NSNumber*** | The date the item was last updated, unix timestamp in seconds | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)



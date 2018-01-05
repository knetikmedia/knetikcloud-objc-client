# JSAPIPropertyDefinitionResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_description** | **NSString*** | The description of the property | [optional] 
**fieldList** | [**JSAPIPropertyFieldListResource***](JSAPIPropertyFieldListResource.md) | A list of the fields on both the property definition and property of this type | [optional] 
**friendlyName** | **NSString*** | The friendly front-facing name of the property | [optional] 
**name** | **NSString*** | The name of the property | 
**optionLabelPath** | **NSString*** | The JSON path to the option label | [optional] 
**optionValuePath** | **NSString*** | The JSON path to the option value | [optional] 
**optionsUrl** | **NSString*** | URL of service containing the property options (assumed JSON array) | [optional] 
**required** | **NSNumber*** | Whether the property is required | 
**type** | **NSString*** | The type of the property. Used for polymorphic type recognition and thus must match an expected type with additional properties. | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)



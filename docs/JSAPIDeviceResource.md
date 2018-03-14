# JSAPIDeviceResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template if one is specified | [optional] 
**createdDate** | **NSNumber*** | The date the device log was created | [optional] 
**_description** | **NSString*** | The description of the device | [optional] 
**deviceType** | **NSString*** | The type of device. Use mobile_device to specifically register mobile devices. This particular type will be used to send and receive notifications | [optional] 
**_id** | **NSString*** | The unique ID for this device. Cannot be changed after creation. Default: random | [optional] 
**location** | **NSString*** | The physical location of the device, coordinates or named place (office, living room, etc) | [optional] 
**macAddress** | **NSString*** | The MAC (media access control) address of the device | [optional] 
**make** | **NSString*** | The make of the device | [optional] 
**model** | **NSString*** | The model of the device | [optional] 
**name** | **NSString*** | The name of the device | [optional] 
**os** | **NSString*** | The OS (operating system) on the device | [optional] 
**owner** | [**JSAPISimpleUserResource***](JSAPISimpleUserResource.md) | The user that owns the device | [optional] 
**serial** | **NSString*** | The serial number of the device | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | Random tags to facilitate search | [optional] 
**template** | **NSString*** | Use to describe and validate custom properties (custom schema). May be null and no validation of additional_properties will be done | [optional] 
**updatedDate** | **NSNumber*** | The date the device log was updated | [optional] 
**users** | [**NSArray&lt;JSAPISimpleUserResource&gt;***](JSAPISimpleUserResource.md) | The users currently using the device | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)



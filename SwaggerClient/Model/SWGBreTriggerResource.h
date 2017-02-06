#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGBreTriggerParameterDefinition.h"


@protocol SWGBreTriggerResource
@end

@interface SWGBreTriggerResource : SWGObject

/* The category this trigger belongs to. See endpoints for related asset information. All new triggers are in category 'custom' [optional]
 */
@property(nonatomic) NSString* category;
/* The unique name for the event. This serves as the unique identifier. Cannot be changed after creation 
 */
@property(nonatomic) NSString* eventName;
/* A list af parameters that will be sent with the event when the trigger is fired. These must be included in the event and match the described types [optional]
 */
@property(nonatomic) NSArray<SWGBreTriggerParameterDefinition>* parameters;
/* Where this trigger came from. System triggers cannot be removed or updated [optional]
 */
@property(nonatomic) NSNumber* systemTrigger;
/* A description of the trigger 
 */
@property(nonatomic) NSString* triggerDescription;
/* A human readable name for this trigger 
 */
@property(nonatomic) NSString* triggerName;

@end
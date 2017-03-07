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


#import "SWGBreRuleLog.h"


@protocol SWGBreEventLog
@end

@interface SWGBreEventLog : SWGObject

/* The customer of the BRE event log [optional]
 */
@property(nonatomic) NSString* customer;
/* The event id of the BRE event log [optional]
 */
@property(nonatomic) NSNumber* eventId;
/* The event name of the BRE event log [optional]
 */
@property(nonatomic) NSString* eventName;
/* The event start date of the BRE event log [optional]
 */
@property(nonatomic) NSNumber* eventStartDate;
/* The id of the BRE event log [optional]
 */
@property(nonatomic) NSString* _id;
/* The event paramters of the BRE event log [optional]
 */
@property(nonatomic) NSObject* parameters;
/* The rules of the BRE event log [optional]
 */
@property(nonatomic) NSArray<SWGBreRuleLog>* rules;

@end

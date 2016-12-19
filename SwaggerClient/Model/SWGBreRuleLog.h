#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation Latest
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/




@protocol SWGBreRuleLog
@end

@interface SWGBreRuleLog : SWGObject

/* Whether the rule ran [optional]
 */
@property(nonatomic) NSNumber* ran;
/* The reason for the rule [optional]
 */
@property(nonatomic) NSString* reason;
/* The end date of the rule in seconds [optional]
 */
@property(nonatomic) NSNumber* ruleEndDate;
/* The id of the rule [optional]
 */
@property(nonatomic) NSString* ruleId;
/* The name of the rule [optional]
 */
@property(nonatomic) NSString* ruleName;
/* The start date of the rule in seconds [optional]
 */
@property(nonatomic) NSNumber* ruleStartDate;

@end
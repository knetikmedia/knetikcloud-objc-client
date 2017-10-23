#import <Foundation/Foundation.h>
#import "JSAPIObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/





@protocol JSAPIBreRuleLog
@end

@interface JSAPIBreRuleLog : JSAPIObject

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

+ (NSDictionary *)modalDictionary;

@end

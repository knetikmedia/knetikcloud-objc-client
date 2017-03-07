#import <Foundation/Foundation.h>
#import "SWGBooleanResource.h"
#import "SWGBreRule.h"
#import "SWGExpressionObject_.h"
#import "SWGPageResourceBreRule_.h"
#import "SWGResult.h"
#import "SWGApi.h"

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



@interface SWGBRERuleEngineRulesApi: NSObject <SWGApi>

extern NSString* kSWGBRERuleEngineRulesApiErrorDomain;
extern NSInteger kSWGBRERuleEngineRulesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a rule
/// Rules define which actions to run when a given event verifies the specified conditions. Conditions and actions are defined by binding event or context parameters to arguments. Conditions also known as Predicates are logical expressions that result in a boolean. Operators are used to describe rules between arguments to form that condition. There are 3 families of operators: Boolean, Math and String. Math and String operators are functions that transform arguments into numbers or strings...<h1>Boolean Operators</h1><br /><br />1 arg:<br />======<br /><br /><ul> <li>IS_NULL</li> <li>IS_NOT_NULL</li> <li>STRING_IS_EMPTY</li> <li>NOT </li> <li>MAP_IS_EMPTY</li></ul><br />2 args:<br />=======<br /><br /><ul> <li>EQ</li> <li>NE (Not Equals)</li> <li>GT (Greater Than)</li> <li>GOE (Greater Or Equals)</li> <li>LT (Lesser Than)</li> <li>LOE (Lesser Or Equals)</li> <li>OR</li> <li>AND</li> <li>XNOR</li> <li>XOR</li> <li>CONTAINS_KEY (for maps only)</li> <li>CONTAINS_VALUE (for maps only)</li> <li>MATCHES (regex)</li> <li>MATCHES_IC (regex ignore case)</li> <li>STARTS_WITH</li> <li>STARTS_WITH_IC</li> <li>EQ_IGNORE_CASE</li> <li>ENDS_WITH</li> <li>ENDS_WITH_IC</li> <li>STRING_CONTAINS</li> <li>STRING_CONTAINS_IC</li> <li>LIKE (SQL like)</li></ul><br />3 args exceptions:<br />=================<br /><br /><ul> <li>BETWEEN</li></ul><br />n args:<br />=======<br /><br /><ul> <li>IN</li> <li>NOT_INT</li></ul><h1>Math Operators</h1>1 arg:<br />=====<br /><br /><ul> <li>NEGATE</li> <li>MAP_SIZE</li> <li>STRING_LENGTH</li> <li>CEIL</li> <li>ABS</li> <li>FLOOR</li> <li>ROUND</li> <li>RANDOM (no arg)</li> <li>RANDOM2 (seed arg)</li> <li>NUMCAST</li> <li>HOUR</li> <li>MINUTE</li> <li>SECOND</li> <li>MILLISECOND</li> <li>YEAR</li> <li>WEEK</li> <li>YEAR_MONTH</li> <li>YEAR_WEEK</li> <li>DAY_OF_WEEK</li> <li>DAY_OF_MONTH</li> <li>DAY_OF_YEAR</li> <li>WEEK</li> <li>WEEK</li> <li>WEEK</li></ul><br /><br />2 args:<br />======<br /><br /><ul> <li>ADD</li> <li>DIV</li> <li>MULT</li> <li>SUB</li> <li>POWER</li> <li>MOD</li> <li>LOCATE (index of (string, char))</li> <li>DIFF_YEARS</li> <li>DIFF_MONTHS</li> <li>DIFF_WEEKS</li> <li>DIFF_DAYS</li> <li>DIFF_HOURS</li> <li>DIFF_MINUTES</li> <li>DIFF_SECONDS</li></ul><br /><br />2 args:<br />======<br /><br /><ul> <li>MIN</li> <li>MAX</li></ul><h1>String Operators</h1>0 arg:<br />=====<br /><br /><ul> <li>CURRENT_TIME</li></ul><br /><br />1 arg:<br />=====<br /><br /><ul> <li>CURRENT_TIME</li> <li>LOWER</li> <li>UPPER</li> <li>TRIM</li> <li>STRING_CAST</li></ul><br /><br />2 args:<br />=====<br /><br /><ul> <li>CHAR_AT</li> <li>SUBSTR_1ARG (substr(string, start))</li> <li>CONCAT</li> <li>TRIM</li> <li>STRING_CAST</li></ul><br /><br />3 args:<br />=====<br /><br /><ul> <li>SUBSTR_2ARGS (substr(string, start, length))</li></ul>
///
/// @param breRule The BRE rule object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGBreRule*
-(NSURLSessionTask*) createBRERuleWithBreRule: (SWGBreRule*) breRule
    completionHandler: (void (^)(SWGBreRule* output, NSError* error)) handler;


/// Delete a rule
/// May fail if there are existing rules against it. Cannot delete core rules
///
/// @param _id The id of the rule
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteBRERuleWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Returns a string representation of the provided expression
/// 
///
/// @param expression The expression (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSString*
-(NSURLSessionTask*) getBREExpressionAsStringWithExpression: (SWGExpressionObject_*) expression
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


/// Get a single rule
/// 
///
/// @param _id The id of the rule
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGBreRule*
-(NSURLSessionTask*) getBRERuleWithId: (NSString*) _id
    completionHandler: (void (^)(SWGBreRule* output, NSError* error)) handler;


/// List rules
/// 
///
/// @param filterName Filter for rules containing the given name (optional)
/// @param filterEnabled Filter for rules by active status, null for both (optional) (default to null)
/// @param filterSystem Filter for rules that are system rules when true, or not when false. Leave off for both mixed (optional)
/// @param filterTrigger Filter for rules that are for the trigger with the given name (optional)
/// @param filterAction Filter for rules that use the action with the given name (optional)
/// @param filterCondition Filter for rules that have a condition containing the given string (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceBreRule_*
-(NSURLSessionTask*) getBRERulesWithFilterName: (NSString*) filterName
    filterEnabled: (NSNumber*) filterEnabled
    filterSystem: (NSNumber*) filterSystem
    filterTrigger: (NSString*) filterTrigger
    filterAction: (NSString*) filterAction
    filterCondition: (NSString*) filterCondition
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageResourceBreRule_* output, NSError* error)) handler;


/// Enable or disable a rule
/// This is helpful for turning off systems rules which cannot be deleted or modified otherwise
///
/// @param _id The id of the rule
/// @param enabled The boolean value (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) setBRERuleWithId: (NSString*) _id
    enabled: (SWGBooleanResource*) enabled
    completionHandler: (void (^)(NSError* error)) handler;


/// Update a rule
/// Cannot update system rules
///
/// @param _id The id of the rule
/// @param breRule The BRE rule object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGBreRule*
-(NSURLSessionTask*) updateBRERuleWithId: (NSString*) _id
    breRule: (SWGBreRule*) breRule
    completionHandler: (void (^)(SWGBreRule* output, NSError* error)) handler;



@end

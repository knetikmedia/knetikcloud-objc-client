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


#import "JSAPIBreGlobalScopeDefinition.h"
@protocol JSAPIBreGlobalScopeDefinition;
@class JSAPIBreGlobalScopeDefinition;



@protocol JSAPIBreGlobalResource
@end

@interface JSAPIBreGlobalResource : JSAPIObject

/* A human readable description for display in admin pages [optional]
 */
@property(nonatomic) NSString* _description;
/* The id of the global definition. Default is a random guid. Cannot be updated [optional]
 */
@property(nonatomic) NSString* _id;
/* The key for the global. Must be unique when combined with scope names. Usually a single descriptive word like 'purchases' or 'logins' 
 */
@property(nonatomic) NSString* key;
/* A human readable name for display in admin pages [optional]
 */
@property(nonatomic) NSString* name;
/* A list of scoping parameters. Allows the global to have a different value in different context such as a count of purchases for each user (by putting a 'user' scope in this list). When using this global in a rule these scopes will need to be mapped with an expression to provide a value, similar to the parameters in an action [optional]
 */
@property(nonatomic) NSArray<JSAPIBreGlobalScopeDefinition>* scopes;
/* Where this global came from. System globals cannot be removed or updated [optional]
 */
@property(nonatomic) NSNumber* systemGlobal;
/* The variable type the global stores. See the BRE variables endpoint for list 
 */
@property(nonatomic) NSString* type;

+ (NSDictionary *)modalDictionary;

@end

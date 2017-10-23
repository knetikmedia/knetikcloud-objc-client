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


#import "JSAPIImportJobOutputResource.h"
@protocol JSAPIImportJobOutputResource;
@class JSAPIImportJobOutputResource;



@protocol JSAPIImportJobResource
@end

@interface JSAPIImportJobResource : JSAPIObject

/* The id of the category to assign all questions in the import to 
 */
@property(nonatomic) NSString* categoryId;
/* The date the job was created in seconds since unix epoc [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The id of the job [optional]
 */
@property(nonatomic) NSNumber* _id;
/* A name for this import for later reference 
 */
@property(nonatomic) NSString* name;
/* Error information from validation [optional]
 */
@property(nonatomic) NSArray<JSAPIImportJobOutputResource>* output;
/* The number of questions form the CSV file. Filled in after validation [optional]
 */
@property(nonatomic) NSNumber* recordCount;
/* The status of the job [optional]
 */
@property(nonatomic) NSString* status;
/* The date the job was last updated in seconds since unix epoc [optional]
 */
@property(nonatomic) NSNumber* updatedDate;
/* The url of a CSV file to pull trivia questions from. Cannot be changed after initial POST 
 */
@property(nonatomic) NSString* url;
/* The vendor who supplied this set of questions 
 */
@property(nonatomic) NSString* vendor;

+ (NSDictionary *)modalDictionary;

@end

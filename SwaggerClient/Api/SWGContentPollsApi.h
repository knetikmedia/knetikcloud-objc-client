#import <Foundation/Foundation.h>
#import "SWGPagePollResource_.h"
#import "SWGPageTemplateResource_.h"
#import "SWGPollResource.h"
#import "SWGPollResponseResource.h"
#import "SWGTemplateResource.h"
#import "SWGApi.h"

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



@interface SWGContentPollsApi: NSObject <SWGApi>

extern NSString* kSWGContentPollsApiErrorDomain;
extern NSInteger kSWGContentPollsApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Add your vote to a poll
/// 
///
/// @param _id The poll id
/// @param answerKey The answer key (optional)
/// 
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPollResponseResource*
-(NSNumber*) answerPollUsingPOSTWithId: (NSString*) _id
    answerKey: (NSString*) answerKey
    completionHandler: (void (^)(SWGPollResponseResource* output, NSError* error)) handler;


/// Create a poll template
/// Poll templates define a type of poll and the properties they have
///
/// @param pollTemplateResource The poll template resource object (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGTemplateResource*
-(NSNumber*) createPollTemplateUsingPOSTWithPollTemplateResource: (SWGTemplateResource*) pollTemplateResource
    completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;


/// Create a new poll
/// Polls are blobs of text with titles, a category and assets. Formatting and display of the text is in the hands of the front end.
///
/// @param pollResource The poll object (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPollResource*
-(NSNumber*) createPollUsingPOSTWithPollResource: (SWGPollResource*) pollResource
    completionHandler: (void (^)(SWGPollResource* output, NSError* error)) handler;


/// Delete a poll template
/// If cascade = 'detach', it will force delete the template even if it's attached to other objects
///
/// @param _id The id of the template
/// @param cascade The value needed to delete used templates (optional)
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) deletePollTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete an existing poll
/// 
///
/// @param _id The poll id
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) deletePollUsingDELETEWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Get poll answer
/// 
///
/// @param _id The poll id
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPollResponseResource*
-(NSNumber*) getPollAnswerUsingGETWithId: (NSString*) _id
    completionHandler: (void (^)(SWGPollResponseResource* output, NSError* error)) handler;


/// Get a single poll template
/// 
///
/// @param _id The id of the template
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGTemplateResource*
-(NSNumber*) getPollTemplateUsingGETWithId: (NSString*) _id
    completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;


/// List and search poll templates
/// 
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageTemplateResource_*
-(NSNumber*) getPollTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageTemplateResource_* output, NSError* error)) handler;


/// Get a single poll
/// 
///
/// @param _id The poll id
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPollResource*
-(NSNumber*) getPollUsingGETWithId: (NSString*) _id
    completionHandler: (void (^)(SWGPollResource* output, NSError* error)) handler;


/// List and search polls
/// Get a list of polls with optional filtering. Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed.
///
/// @param filterCategory Filter for polls from a specific category by id (optional)
/// @param filterTagset Filter for polls with specified tags (separated by comma) (optional)
/// @param filterText Filter for polls whose text contains a string (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPagePollResource_*
-(NSNumber*) getPollsUsingGETWithFilterCategory: (NSString*) filterCategory
    filterTagset: (NSString*) filterTagset
    filterText: (NSString*) filterText
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPagePollResource_* output, NSError* error)) handler;


/// Update a poll template
/// 
///
/// @param _id The id of the template
/// @param pollTemplateResource The poll template resource object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) updatePollTemplateUsingPUTWithId: (NSString*) _id
    pollTemplateResource: (SWGTemplateResource*) pollTemplateResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Update an existing poll
/// 
///
/// @param _id The poll id
/// @param pollResource The poll object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) updatePollUsingPUTWithId: (NSString*) _id
    pollResource: (SWGPollResource*) pollResource
    completionHandler: (void (^)(NSError* error)) handler;



@end
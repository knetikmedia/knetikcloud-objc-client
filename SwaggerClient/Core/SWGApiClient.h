#import <Foundation/Foundation.h>
#import <ISO8601/ISO8601.h>
#import <AFNetworking/AFNetworking.h>
#import "SWGJSONResponseSerializer.h"
#import "SWGJSONRequestSerializer.h"
#import "SWGQueryParamCollection.h"
#import "SWGConfiguration.h"
#import "SWGResponseDeserializer.h"
#import "SWGSanitizer.h"
#import "SWGLogger.h"

/**
* Knetik Platform API Documentation Latest
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGAchievementDefinitionResource.h"
#import "SWGAchievementProgressUpdateRequest.h"
#import "SWGActionResource.h"
#import "SWGActionVariableResource.h"
#import "SWGActivityEntitlementResource.h"
#import "SWGActivityOccurrenceCreationFailure.h"
#import "SWGActivityOccurrenceJoinResult.h"
#import "SWGActivityOccurrenceResource.h"
#import "SWGActivityOccurrenceResults.h"
#import "SWGActivityResource.h"
#import "SWGActivityUserResource.h"
#import "SWGAddressResource.h"
#import "SWGAffiliate.h"
#import "SWGAggregateCountResource.h"
#import "SWGAggregateInvoiceReportResource.h"
#import "SWGAmazonS3Activity.h"
#import "SWGAnswerResource.h"
#import "SWGApplyPaymentRequest.h"
#import "SWGArticleResource.h"
#import "SWGArtist.h"
#import "SWGArtistResource.h"
#import "SWGAvailableSettingResource.h"
#import "SWGBareActivityResource.h"
#import "SWGBareChallengeActivityResource.h"
#import "SWGBatch.h"
#import "SWGBatchRequest.h"
#import "SWGBatchReturn.h"
#import "SWGBehavior.h"
#import "SWGBillingReport.h"
#import "SWGBooleanResource.h"
#import "SWGBreCategoryResource.h"
#import "SWGBreEvent.h"
#import "SWGBreEventLog.h"
#import "SWGBreGlobalResource.h"
#import "SWGBreGlobalScopeDefinition.h"
#import "SWGBreRule.h"
#import "SWGBreRuleLog.h"
#import "SWGBreTriggerParameterDefinition.h"
#import "SWGBreTriggerResource.h"
#import "SWGBundleItem.h"
#import "SWGBundledSku.h"
#import "SWGCampaignResource.h"
#import "SWGCart.h"
#import "SWGCartItemRequest.h"
#import "SWGCartLineItem.h"
#import "SWGCartShippableResponse.h"
#import "SWGCartShippingAddressRequest.h"
#import "SWGCartShippingOption.h"
#import "SWGCartSummary.h"
#import "SWGCatalogSale.h"
#import "SWGCategoryResource.h"
#import "SWGChallengeActivityResource.h"
#import "SWGChallengeEventParticipantResource.h"
#import "SWGChallengeEventResource.h"
#import "SWGChallengeResource.h"
#import "SWGCityResource.h"
#import "SWGClientResource.h"
#import "SWGCollectionCountry_.h"
#import "SWGCollectionString_.h"
#import "SWGCollectionVideoContribution_.h"
#import "SWGCommentResource.h"
#import "SWGCommentSearch.h"
#import "SWGConfig.h"
#import "SWGContributionResource.h"
#import "SWGCountry.h"
#import "SWGCountryResource.h"
#import "SWGCountryTaxResource.h"
#import "SWGCouponDefinition.h"
#import "SWGCouponItem.h"
#import "SWGCreateBillingAgreementRequest.h"
#import "SWGCreatePayPalPaymentRequest.h"
#import "SWGCurrency.h"
#import "SWGCurrencyResource.h"
#import "SWGCustomerConfig.h"
#import "SWGCustomerResource.h"
#import "SWGDatabaseConfig.h"
#import "SWGDeltaResource.h"
#import "SWGDeviceResource.h"
#import "SWGDiscount.h"
#import "SWGDispositionCount.h"
#import "SWGDispositionResource.h"
#import "SWGEntitlementItem.h"
#import "SWGExpressionObject_.h"
#import "SWGFinalizeBillingAgreementRequest.h"
#import "SWGFinalizePayPalPaymentRequest.h"
#import "SWGFlagReportResource.h"
#import "SWGFlagResource.h"
#import "SWGForwardLog.h"
#import "SWGFulfillmentType.h"
#import "SWGGooglePaymentRequest.h"
#import "SWGGrantTypeResource.h"
#import "SWGGroup.h"
#import "SWGGroupMember.h"
#import "SWGGroupMemberResource.h"
#import "SWGGroupResource.h"
#import "SWGImportJobOutputResource.h"
#import "SWGImportJobResource.h"
#import "SWGInventorySubscriptionResource.h"
#import "SWGInvoiceCreateRequest.h"
#import "SWGInvoiceItemResource.h"
#import "SWGInvoiceLogEntry.h"
#import "SWGInvoicePaymentStatusRequest.h"
#import "SWGInvoiceResource.h"
#import "SWGItemBehaviorDefinitionResource.h"
#import "SWGItemTemplateResource.h"
#import "SWGKeyValuePairStringString_.h"
#import "SWGLanguage.h"
#import "SWGLeaderboardEntryResource.h"
#import "SWGLeaderboardResource.h"
#import "SWGLevelingResource.h"
#import "SWGLocalizer.h"
#import "SWGLocationLogResource.h"
#import "SWGLookupTypeResource.h"
#import "SWGMaintenance.h"
#import "SWGMapStringObject_.h"
#import "SWGMetricResource.h"
#import "SWGMongoDatabaseConfig.h"
#import "SWGNestedCategory.h"
#import "SWGNewPasswordRequest.h"
#import "SWGOauthAccessTokenResource.h"
#import "SWGOperator.h"
#import "SWGOptimalPaymentRequest.h"
#import "SWGOrder.h"
#import "SWGPageResourceAchievementDefinitionResource_.h"
#import "SWGPageResourceAggregateCountResource_.h"
#import "SWGPageResourceAggregateInvoiceReportResource_.h"
#import "SWGPageResourceArticleResource_.h"
#import "SWGPageResourceArtistResource_.h"
#import "SWGPageResourceBareActivityResource_.h"
#import "SWGPageResourceBareChallengeActivityResource_.h"
#import "SWGPageResourceBillingReport_.h"
#import "SWGPageResourceBreCategoryResource_.h"
#import "SWGPageResourceBreEventLog_.h"
#import "SWGPageResourceBreGlobalResource_.h"
#import "SWGPageResourceBreRule_.h"
#import "SWGPageResourceBreTriggerResource_.h"
#import "SWGPageResourceCampaignResource_.h"
#import "SWGPageResourceCartSummary_.h"
#import "SWGPageResourceCatalogSale_.h"
#import "SWGPageResourceCategoryResource_.h"
#import "SWGPageResourceChallengeEventParticipantResource_.h"
#import "SWGPageResourceChallengeEventResource_.h"
#import "SWGPageResourceChallengeResource_.h"
#import "SWGPageResourceClientResource_.h"
#import "SWGPageResourceCommentResource_.h"
#import "SWGPageResourceConfig_.h"
#import "SWGPageResourceCountryTaxResource_.h"
#import "SWGPageResourceCurrencyResource_.h"
#import "SWGPageResourceDeviceResource_.h"
#import "SWGPageResourceDispositionResource_.h"
#import "SWGPageResourceEntitlementItem_.h"
#import "SWGPageResourceFlagReportResource_.h"
#import "SWGPageResourceForwardLog_.h"
#import "SWGPageResourceFulfillmentType_.h"
#import "SWGPageResourceGroupMemberResource_.h"
#import "SWGPageResourceGroupResource_.h"
#import "SWGPageResourceImportJobResource_.h"
#import "SWGPageResourceInvoiceLogEntry_.h"
#import "SWGPageResourceInvoiceResource_.h"
#import "SWGPageResourceItemTemplateResource_.h"
#import "SWGPageResourceLevelingResource_.h"
#import "SWGPageResourceLocationLogResource_.h"
#import "SWGPageResourceMapStringObject_.h"
#import "SWGPageResourceOauthAccessTokenResource_.h"
#import "SWGPageResourcePermissionResource_.h"
#import "SWGPageResourcePollResource_.h"
#import "SWGPageResourceQuestionResource_.h"
#import "SWGPageResourceQuestionTemplateResource_.h"
#import "SWGPageResourceRevenueCountryReportResource_.h"
#import "SWGPageResourceRevenueProductReportResource_.h"
#import "SWGPageResourceRewardSetResource_.h"
#import "SWGPageResourceRoleResource_.h"
#import "SWGPageResourceSavedAddressResource_.h"
#import "SWGPageResourceSimpleUserResource_.h"
#import "SWGPageResourceSimpleWallet_.h"
#import "SWGPageResourceStateTaxResource_.h"
#import "SWGPageResourceStoreItemTemplateResource_.h"
#import "SWGPageResourceStoreItem_.h"
#import "SWGPageResourceString_.h"
#import "SWGPageResourceSubscriptionResource_.h"
#import "SWGPageResourceSubscriptionTemplateResource_.h"
#import "SWGPageResourceTemplateResource_.h"
#import "SWGPageResourceTransactionResource_.h"
#import "SWGPageResourceUsageInfo_.h"
#import "SWGPageResourceUserAchievementGroupResource_.h"
#import "SWGPageResourceUserActionLog_.h"
#import "SWGPageResourceUserBaseResource_.h"
#import "SWGPageResourceUserInventoryResource_.h"
#import "SWGPageResourceUserItemLogResource_.h"
#import "SWGPageResourceUserLevelingResource_.h"
#import "SWGPageResourceUserRelationshipResource_.h"
#import "SWGPageResourceVendorResource_.h"
#import "SWGPageResourceVideoRelationshipResource_.h"
#import "SWGPageResourceVideoResource_.h"
#import "SWGPageResourceWalletTotalResponse_.h"
#import "SWGPageResourceWalletTransactionResource_.h"
#import "SWGPayBySavedMethodRequest.h"
#import "SWGPaymentAuthorizationResource.h"
#import "SWGPaymentMethodResource.h"
#import "SWGPaymentMethodTypeResource.h"
#import "SWGPermission.h"
#import "SWGPermissionResource.h"
#import "SWGPollAnswerResource.h"
#import "SWGPollResource.h"
#import "SWGPollResponseResource.h"
#import "SWGPredicateOperation.h"
#import "SWGProperty.h"
#import "SWGPropertyDefinitionResource.h"
#import "SWGQuestionResource.h"
#import "SWGQuestionTemplateResource.h"
#import "SWGRawEmailResource.h"
#import "SWGRawSMSResource.h"
#import "SWGReactivateSubscriptionRequest.h"
#import "SWGRefundRequest.h"
#import "SWGRefundResource.h"
#import "SWGResult.h"
#import "SWGRevenueCountryReportResource.h"
#import "SWGRevenueProductReportResource.h"
#import "SWGRevenueReportResource.h"
#import "SWGRewardCurrencyResource.h"
#import "SWGRewardItemResource.h"
#import "SWGRewardSetResource.h"
#import "SWGRole.h"
#import "SWGRoleResource.h"
#import "SWGSampleCountriesResponse.h"
#import "SWGSavedAddressResource.h"
#import "SWGSchedule.h"
#import "SWGSearchReferenceMapping.h"
#import "SWGSelectedSettingResource.h"
#import "SWGSettingOption.h"
#import "SWGShippingItem.h"
#import "SWGSimpleReferenceResourceInt_.h"
#import "SWGSimpleReferenceResourceLong_.h"
#import "SWGSimpleReferenceResourceString_.h"
#import "SWGSimpleUserResource.h"
#import "SWGSimpleWallet.h"
#import "SWGSku.h"
#import "SWGSkuRequest.h"
#import "SWGSqlDatabaseConfig.h"
#import "SWGStateResource.h"
#import "SWGStateTaxResource.h"
#import "SWGStoreItem.h"
#import "SWGStoreItemTemplateResource.h"
#import "SWGStoreListRequest.h"
#import "SWGStripeCreatePaymentMethod.h"
#import "SWGStripePaymentRequest.h"
#import "SWGSubscriptionCreditResource.h"
#import "SWGSubscriptionPlanResource.h"
#import "SWGSubscriptionResource.h"
#import "SWGSubscriptionTemplateResource.h"
#import "SWGTemplateEmailResource.h"
#import "SWGTemplateResource.h"
#import "SWGTemplateSMSResource.h"
#import "SWGTierResource.h"
#import "SWGTimezone.h"
#import "SWGTokenDetailsResource.h"
#import "SWGTransactionResource.h"
#import "SWGUsageInfo.h"
#import "SWGUser.h"
#import "SWGUserAchievementGroupResource.h"
#import "SWGUserAchievementResource.h"
#import "SWGUserActionLog.h"
#import "SWGUserActivityResultsResource.h"
#import "SWGUserBaseResource.h"
#import "SWGUserInventoryAddRequest.h"
#import "SWGUserInventoryResource.h"
#import "SWGUserItemLogResource.h"
#import "SWGUserLevelingResource.h"
#import "SWGUserRelationship.h"
#import "SWGUserRelationshipReferenceResource.h"
#import "SWGUserRelationshipResource.h"
#import "SWGUserResource.h"
#import "SWGUserTag.h"
#import "SWGVariableTypeResource.h"
#import "SWGVendorResource.h"
#import "SWGVideo.h"
#import "SWGVideoContribution.h"
#import "SWGVideoRelationshipResource.h"
#import "SWGVideoResource.h"
#import "SWGVideoTag.h"
#import "SWGWalletAlterRequest.h"
#import "SWGWalletTotalResponse.h"
#import "SWGWalletTransactionResource.h"
#import "SWGXsollaPaymentRequest.h"



@class SWGConfiguration;

/**
 * A key for `NSError` user info dictionaries.
 *
 * The corresponding value is the parsed response body for an HTTP error.
 */
extern NSString *const SWGResponseObjectErrorKey;

@interface SWGApiClient : AFHTTPSessionManager

@property(nonatomic, assign) NSURLRequestCachePolicy cachePolicy;
@property(nonatomic, assign) NSTimeInterval timeoutInterval;
@property(nonatomic, readonly) NSOperationQueue* queue;

/// In order to ensure the HTTPResponseHeaders are correct, it is recommended to initialize one SWGApiClient instance per thread.
@property(nonatomic, readonly) NSDictionary* HTTPResponseHeaders;

@property(nonatomic, strong) id<SWGResponseDeserializer> responseDeserializer;

@property(nonatomic, strong) id<SWGSanitizer> sanitizer;
/**
 * Clears Cache
 */
+(void)clearCache;

/**
 * Turns on cache
 *
 * @param enabled If the cached is enable, must be `YES` or `NO`
 */
+(void)setCacheEnabled:(BOOL) enabled;

/**
 * Gets the request queue size
 *
 * @return The size of `queuedRequests` static variable.
 */
+(NSUInteger)requestQueueSize;

/**
 * Sets the client unreachable
 *
 * @param state off line state, must be `YES` or `NO`
 */
+(void) setOfflineState:(BOOL) state;

/**
 * Gets if the client is unreachable
 *
 * @return The client offline state
 */
+(BOOL) getOfflineState;

/**
 * Sets the client reachability, this may be overridden by the reachability manager if reachability changes
 *
 * @param status The client reachability status.
 */
+(void) setReachabilityStatus:(AFNetworkReachabilityStatus) status;

/**
 * Gets the client reachability
 *
 * @return The client reachability.
 */
+(AFNetworkReachabilityStatus) getReachabilityStatus;

/**
 * Gets the next request id
 *
 * @return The next executed request id.
 */
+(NSNumber*) nextRequestId;

/**
 * Generates request id and add it to the queue
 *
 * @return The next executed request id.
 */
+(NSNumber*) queueRequest;

/**
 * Removes request id from the queue
 *
 * @param requestId The request which will be removed.
 */
+(void) cancelRequest:(NSNumber*)requestId;

/**
 * Customizes the behavior when the reachability changed
 *
 * @param changeBlock The block will be executed when the reachability changed.
 */
+(void) setReachabilityChangeBlock:(void(^)(int))changeBlock;

/**
 * Sets the api client reachability strategy
 */
- (void)configureCacheReachibility;

/**
 * Sets header for request
 *
 * @param value The header value
 * @param forKey The header key
 */
-(void)setHeaderValue:(NSString*) value
               forKey:(NSString*) forKey;

/**
 * Updates header parameters and query parameters for authentication
 *
 * @param headers The header parameter will be updated, passed by pointer to pointer.
 * @param querys The query parameters will be updated, passed by pointer to pointer.
 * @param authSettings The authentication names NSArray.
 */
- (void) updateHeaderParams:(NSDictionary **)headers
                queryParams:(NSDictionary **)querys
           WithAuthSettings:(NSArray *)authSettings;

/**
 * Performs request
 *
 * @param path Request url.
 * @param method Request method.
 * @param pathParams Request path parameters.
 * @param queryParams Request query parameters.
 * @param body Request body.
 * @param headerParams Request header parameters.
 * @param authSettings Request authentication names.
 * @param requestContentType Request content-type.
 * @param responseContentType Response content-type.
 * @param completionBlock The block will be executed when the request completed.
 *
 * @return The request id.
 */
-(NSNumber*) requestWithPath:(NSString*) path
                      method:(NSString*) method
                  pathParams:(NSDictionary *) pathParams
                 queryParams:(NSDictionary*) queryParams
                  formParams:(NSDictionary *) formParams
                       files:(NSDictionary *) files
                        body:(id) body
                headerParams:(NSDictionary*) headerParams
                authSettings:(NSArray *) authSettings
          requestContentType:(NSString*) requestContentType
         responseContentType:(NSString*) responseContentType
                responseType:(NSString *) responseType
             completionBlock:(void (^)(id, NSError *))completionBlock;

/**
 * Custom security policy
 *
 * @return AFSecurityPolicy
 */
- (AFSecurityPolicy *) customSecurityPolicy;

/**
 * SWGConfiguration return sharedConfig
 *
 * @return SWGConfiguration
 */
- (SWGConfiguration*) configuration;


@end